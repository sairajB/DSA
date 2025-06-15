#include <iostream>
using namespace std;

int firstOcc(int arr[],int n,int k){
    int start = 0;
    int end = n-1;
    int ans = -1;
    int mid = (start+end)/2;

    while(start<=end){
        if(arr[mid] == k){
            end = mid-1;
        }else if(arr[mid] > k){
            start = mid+1;
        }else if(arr[mid] < k){
            end = mid-1;
        }
        mid = (start+end)/2;
    }
    cout<<"The first occurence is at index: "<<ans;
}

int main(){
    int array[] = {1,2,3,3,3,4,5};
    firstOcc(array,7,3);
}