#include <iostream>
using namespace std;

int binaryS(int arr[],int target,int size){
    int start = 0;
    int end = size-1;
    
    while(start<=end){
        int mid = start + (end-start)/2;
        if(arr[mid] == target){
            cout<<arr[mid];
            return arr[mid];
        }else if(arr[mid] > target){
            end = mid -1;
        }else if(arr[mid] < target){
            start = mid+1;
        }else if(arr[mid] != target){
            for(int i = 0;i<size;i++){
                if()
            }
        }
    }

}

int main(){
    int array[] = {1,2,3,4,5};
    binaryS(array,4,5);
}