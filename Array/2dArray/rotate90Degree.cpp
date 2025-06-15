/*#include <iostream>
#include <vector>
using namespace std;

void rotate(vector<vector<int>> &matrix)
{
    vector<int> ans;
    int row = matrix.size();
    int col = matrix[0].size();
    int total = row * col;
    int count = 0;

    int startRow = 0;
    int startCol = 0;
    int endRow = row - 1;
    int endCol = col - 1;

    while (total > count)
    {
        for (int index = startCol; index <= endCol; index++)
        {
            ans.push_back(matrix[startRow][index]);
            count++;
        }
        startCol++;
    }

    // Update the matrix with the rotated values
    int k = 0;
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            matrix[j][i] = ans[k++];
        }
    }
}

int main()
{
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    // Print original matrix
    cout << "Original Matrix:" << endl;
    for (int row = 0; row < matrix.size(); row++)
    {
        for (int col = 0; col < matrix[row].size(); col++)
        {
            cout << matrix[row][col] << " ";
        }
        cout << endl;
    }

    // Rotate the matrix
    rotate(matrix);

    // Print rotated matrix
    cout << "Rotated Matrix:" << endl;
    for (int row = 0; row < matrix.size(); row++)
    {
        for (int col = 0; col < matrix[row].size(); col++)
        {
            cout << matrix[row][col] << " ";
        }
        cout << endl;
    }

    return 0;
}*/

