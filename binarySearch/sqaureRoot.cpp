#include <iostream>
using namespace std;

int squareRoot(int n){
    int start = 0;
    int end = n;
    int ans = -1;

    while(start<=end){
        int mid = start + (end-start)/2;
        int square = mid*mid;
        if(square == n){
            return mid;
        }
        if(square > n){
            end = mid-1;
        }else{
            ans = mid;
            start = mid+1;

        }
    }
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int result = squareRoot(n);
    if (result == -1) {
        cout << "Unable to find the square root of " << n << "." << endl;
    } else {
        cout << "The square root of " << n << " is " << result << "." << endl;
    }

    return 0;
}