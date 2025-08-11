#include <bits/stdc++.h>
using namespace std;

int findMode(vector<int> &arr)
{
    if (arr.empty())
    {
        // Handle the case of an empty array, e.g., by returning an error or a specific value.
        return -1; // Assuming -1 indicates no mode or an error.
    }

    unordered_map<int, int> frequencyMap;
    for (int num : arr)
    {
        frequencyMap[num]++;
    }

    int mode = arr[0];
    int maxFrequency = 0;

    for (auto const &pair : frequencyMap)
    {
        if (pair.second > maxFrequency)
        {
            maxFrequency = pair.second;
            mode = pair.first;
        }
    }

    return mode;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 4, 5, 8};
    int result = findMode(arr);
    cout << "Mode: " << result << endl;
    return 0;
}