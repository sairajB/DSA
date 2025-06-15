#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    int n = nums.size();
    int start = 0;
    int end = n - 1;
    vector<int> original = nums; // Keep a copy of the original array
    sort(nums.begin(), nums.end());
    while (start < end) {
        if (nums[start] + nums[end] == target) {
            // Find the original indices
            int index1 = find(original.begin(), original.end(), nums[start]) - original.begin();
            int index2 = find(original.begin(), original.end(), nums[end]) - original.begin();
            return {index1, index2};
        } else if (nums[start] + nums[end] < target) {
            start++;
        } else {
            end--;
        }
    }
    return {};
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = twoSum(nums, target);
    if (!result.empty()) {
        cout << "Indices: " << result[0] << ", " << result[1] << endl;
    } else {
        cout << "No two sum solution found" << endl;
    }
    return 0;
}