#include <iostream>
using namespace std;

int firstOcc(int arr[], int n, int k) {
    int start = 0;
    int end = n - 1;
    int ans = -1;

    while (start <= end) {
        int mid = start + (end - start) / 2; // Corrected calculation of mid
        if (arr[mid] == k) {
            ans = mid;
            end = mid - 1; // Look on the left side for the first occurrence
        } else if (arr[mid] > k) {
            end = mid - 1;
        } else if(arr[mid] < k){
            start = mid + 1;
        }
    }
    cout << ans<<endl;
}

int lastOcc(int arr[], int n, int k) {
    int start = 0;
    int end = n - 1;
    int ans = -1;

    while (start <= end) {
        int mid = start + (end - start) / 2; // Corrected calculation of mid

        if (arr[mid] == k) {
            ans = mid;
            start = mid + 1; // Look on the left side for the first occurrence
        } else if (arr[mid] > k) {
            end = mid - 1;
        } else if(arr[mid] < k){
            start = mid + 1;
        }
    }
    cout << ans<<endl;
}

int main(){
    int array[] = {1,2,3,4,4,4,5};
    firstOcc(array,7,4);
    lastOcc(array,7,4);
}
