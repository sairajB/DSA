#include <iostream>
using namespace std;

//Main point to remember here is to see which part of array if sorted (left or right)

int searchArray(int arr[],int n,int target){
    int start = 0;
    int end = n-1;
    while(start <=end){
        int mid = start + (end-start)/2;

        if(arr[mid] == target){
            return mid;
        }
        //left sorted 
        if(arr[start] <= arr[mid]){
            if(target >= arr[start] && target <= arr[mid]){
                end = mid-1;
            }else{
                start = mid+1;
            }
        }
        //right sorted
        else{
            if(target <= arr[end] && target >= arr[mid]){
                start = mid+1;
            }else{
                end = mid-1;
            }
        }
    }
}

int main() {
    int arr[] = {4, 5, 6, 7, 0, 1, 2};
    int target = 1;

    int result = searchArray(arr, 7, target);

    if(result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in the array" << endl;
    }

    return 0;
}