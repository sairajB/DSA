#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;
        for (int s = 0; s < n; s++) {
            int sum = 0;
            for (int e = s; e < n; e++) {
                sum += nums[e];
                if (sum == k) {
                    count++;
                }
            }
        }
        return count;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {1,1,1};
    int k = 2;
    int result = solution.subarraySum(nums, k);
    cout << "Number of subarrays with sum " << k << ": " << result << endl;
    return 0;
}