#include <iostream>
using namespace std;

int pivotElement(int arr[],int n){
    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2;

    while(start<end){
        if(arr[mid] >= arr[0]){
            start = mid+1;
        }else{
            end = mid;
        }
        mid = start + (end-start)/2;
    }
    return start;
}

int main(){
    int array[] = {8,10,17,1,3};
    cout<<"Pivot element: "<<pivotElement(array,5); 
}