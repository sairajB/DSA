#include <iostream>
using namespace std;

void isPalindrome(int x)
{
    int size = 4;
    int ans;
    for (int i = size - 1; i >= 0; i--)
    {
        int rem = x % 10;
        int num = x / 10;

        ans = ans+rem;
    }
}

int main()
{
    isPalindrome(1221);

    /*int arr[5] = {0, 1, 2, 3, 4};
    int size = 5;

    for (int i = size - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }*/
}