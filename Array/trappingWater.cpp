#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int trap(vector<int> &height)
{
    int n = height.size();
    if (n == 0)
        return 0; // Edge case: no heights

    vector<int> left(n);
    vector<int> right(n);

    // Fill the left array
    left[0] = height[0];
    for (int i = 1; i < n; i++)
    {
        left[i] = max(left[i - 1], height[i]);
        cout<<left[i]<<" ";
    }
     cout<<endl;

    // Fill the right array
    right[n - 1] = height[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        right[i] = max(right[i + 1], height[i]);
        cout<<right[i]<<" ";
    }
     cout<<endl;

    // Calculate the trapped water
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += min(left[i], right[i]) - height[i];
    }

    return ans;
}

int main()
{
    vector<int> height = {4, 2, 0, 5, 2, 6, 2, 3};
    cout << "Trapped water: " << trap(height) << endl;
    return 0;
}