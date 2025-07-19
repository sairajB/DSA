#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> arr = {
        {1, 2, 3, 9},
        {4, 5, 6, 7},
        {7, 8, 9, 5},
        {3, 2, 8, 4},
    };

    int size = arr.size();
    int rows = arr.size();
    int col = arr[0].size();
    cout << "Size: " << size << endl;

    cout << "Number of rows: " << rows << endl;
    cout << "Number of colums: " << col << endl;
}