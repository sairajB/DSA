#include <bits/stdc++.h>
using namespace std;

int sumOfUnique(vector<int> &nums)
{
    vector<int> arr;
    vector<int> copy = nums;
    int size = copy.size();
    int test = 0;
    for (int i = 0; i < size; i++)
    {
        test = test ^ copy[i];
    }
}

int main()
{
    cout << "Hello world";
}