#include <iostream>
using namespace std;

void reverseArray(int arr[], int size)
{
    int start = arr[0];
    int end = arr[size];

    for (int i = 0; i < size; i++)
    {
        while(start >= end){
            arr[i] = arr[size-1];
            start++;
            end--;
        }
    }
}

int main()
{
    cout << "Hello Main";
}