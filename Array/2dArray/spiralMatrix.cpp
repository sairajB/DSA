#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> vec = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    // Print elements of the vector
    for (int row = 0; row < vec.size(); row++)
    {
        for (int col = 0; col < vec[row].size(); col++)
        {
            cout << vec[row][col] << " ";
        }
        cout << endl; // Print a newline after each row
    }
    cout << endl;
    // rotate by 90 degree
    for (int col = 0; col < 3; col++)
    {
        for (int row = 0; row < 3; row++)
        {
            cout << vec[col][row] << " ";
        }
        cout << endl; // Print a newline after each row
    }
    cout << endl;
}
