#include <iostream>
using namespace std;

int binarySearch(int arr[],int size,int key){
    int start = 0;
    int end = size-1;

    while(start<=end){
            int mid = start+(end-start)/2;

        if(arr[mid] == key){
            return mid;
        }else if(arr[mid] < key){
            start = mid+1;
        }else if(arr[mid] > key){
            end = mid-1;
        }
    }
}

int main() {
    int array[] = {1, 3, 7, 8, 10};
    int index = binarySearch(array, 5, 1);
    if (index != -1) {
        cout << "Key found at index: " << index << endl;
    } else {
        cout << "Key not found" << endl;
    }
}