#include <bits/stdc++.h>
using namespace std;

int secondLargest(vector<int> nums)
{
    int currMax = INT_MIN;
    int n = nums.size();
    int max = -1;
    int ans = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] > max)
            max = nums[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (nums[i] > currMax && nums[i] < max)
        {
            currMax = nums[i];
        }
    }
    return currMax;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 6, 6};
    int ans = secondLargest(arr);
    cout << ans;
}