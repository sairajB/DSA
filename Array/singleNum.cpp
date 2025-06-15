#include <iostream>
#include <vector>
#include <algorithm> // Include this header for std::sort

using namespace std;

int singleNumber(vector<int>& nums) {
    int n = nums.size();
    
    // Sort the vector
    sort(nums.begin(), nums.end());
    
}

int main() {
    /*vector<int> nums = {4, 2, 5, 1, 3};
    singleNumber(nums);
    
    // Print sorted vector
    for (int num : nums) {
        cout << num << " ";
    }
    return 0;*/
}