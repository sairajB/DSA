#include <iostream>
#include <climits>
using namespace std;

int maxArray(int arr[], int size)
{
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "The maximum number in array is: " << max << endl;
    return max;
}

int minArray(int arr[], int size)
{
    int min = INT_MAX;
    for (int i = 0; i < min; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << "The minimum number in array is: " << min << endl;
    return min;
}

int main()
{
    int array[] = {5, 8, 23, 98, 12};
    maxArray(array, 5);
    minArray(array, 5);
}