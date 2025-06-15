#include <iostream>
using namespace std;

int binarySearch(int arr[],int size,int key){
    int start = 0;
    int end = size-1;

    int mid = (start+end)/2;

    while(start <=end){
        if(arr[mid] == key){
            cout<<"Key is present at: "<<mid;
        }

        if(key >= arr[mid]){
            start = mid+1;
        }else{
            end = mid-1;
        }
        mid = (start+end)/2;
    }
    return -1;
}

int main(){
    int array[] = {2,4,6,8,10};
    binarySearch(array,5,8);
}