#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the " << i << "th element." << endl;
        cin >> arr[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i]<<" ";
    }
}