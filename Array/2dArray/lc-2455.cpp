#include <bits/stdc++.h>
using namespace std;

int averageValue(vector<int> &nums)
{
    int n = nums.size();
    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        if (nums[i] % 2 == 0 && nums[i] % 3 == 0)
        {
            ans.push_back(nums[i]);
        }
    }
    int sum = 0;
    int m = ans.size();
    for (int i = 0; i < m; i++)
    {
        sum += nums[i];
    }
    return sum;
}

int main()
{
    vector<int> nums = {1, 3, 6, 10, 12, 15};
    int ans = averageValue(nums);
    cout<<ans;

}