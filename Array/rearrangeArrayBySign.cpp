#include <bits/stdc++.h>
using namespace std;

vector<int> rearrangeArray(vector<int> &nums)
{
    int n = nums.size();
    vector<int> Enums;
    vector<int> Onums;
    vector<int> Final;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] > 0)
        {
            Enums.push_back(nums[i]);
        }
        else
        {
            Onums.push_back(nums[i]);
        }
    }
    // Combine Enums and Onums into Final
    for (int i = 0; i < Enums.size(); i++)
    {
        Final.push_back(Enums[i]);
        Final.push_back(Onums[i]);
    }
    return Final;
}

int main()
{
    vector<int> nums = {3, 1, -2, -5, 2, -4};
    vector<int> result = rearrangeArray(nums);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    return 0;
}