#include<iostream>
using namespace std;

int search(int arr[], int size, int key){
    int start = 0, end = size - 1;
    int mid = (start + end) / 2;

    while (start<=end)
    {
        if(key==arr[mid]){
            return mid;
        }
        else if(key>arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return -1;
}

int searchOptimized(int arr[], int size, int key)
{
    int start = 0, end = size - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (key == arr[mid])
        {
            return mid;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{
    int arr[10000];
    int size;
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int key;
    cin >> key;

    int loc = searchOptimized(arr, size, key);

    if (loc != -1)
    {
        cout << "Element " << key << " is at index : " << loc;
    }
    else
    {
        cout << "Given element not present in array";
    }
}