#include<iostream>
using namespace std;

int search(int arr[],int size, int key){
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[10000];
    int size;
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int key;
    cin >> key;

    int loc = search(arr, size, key);

    if(loc!=-1){
        cout << "Element " << key << " is at index : " << loc;
    }
    else{
        cout << "Given element not present in array";
    }
}