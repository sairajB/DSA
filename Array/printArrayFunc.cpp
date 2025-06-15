#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    cout << "The elements in array are: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void inputArray(int arr[], int size)
{
    cout << "Enter the elements in array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

int main()
{
    int arr[10];
    inputArray(arr, 10);
    // int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    printArray(arr, 10);
}