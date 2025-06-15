#include <iostream>
#include <vector>
using namespace std;

int singleElement(vector<int>& nums) {
    int size = nums.size();
    
    // Iterate through the vector with step 2 since we are skipping pairs
    for (int i = 0; i < size - 1; i +=2) {
        if (nums[i] != nums[i + 1]) {
            return nums[i];
        }
    }
    // If we don't find a pair, the single element must be the last element
    return nums[size - 1];
}


int main() {
    vector<int> nums = {1, 1, 2, 3, 3, 4, 4, 8, 8};
    int result = singleElement(nums);
    cout << result << endl;
    return 0;
}