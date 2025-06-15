#include <bits/stdc++.h>
using namespace std;

int maxSum(int arr[3][3]){
    int max = INT_MIN;
    for(int row = 0; row < 3; row++){
        int sum = 0;
        for(int col = 0; col < 3; col++){
            sum = sum + arr[row][col];
        }
        if(sum > max){
            max = sum;
        }
    }
    cout << "Max row-wise sum is: " << max << endl;
    return max;
}

int main(){
    int array[3][3] = {1,2,3,4,5,6,7,8,9};
    for(int row = 0;row<3;row++){
        for(int col = 0;col<3;col++){
            cout<<array[row][col]<<" ";
        }
        cout<<" "<<endl;
    }
    maxSum(array);
}