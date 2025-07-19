#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[3][4] = {
        {1, 2, 3, 5},
        {4, 5, 6, 8},
        {7, 8, 9, 0}};

    cout << "Original Matrix (3x4): " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Create transpose matrix with swapped dimensions (4x3)
    int transpose[4][3];
    
    // Transpose: row becomes column, column becomes row
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            transpose[j][i] = arr[i][j];
        }
    }

    cout << "Transposed Matrix (4x3): " << endl;
    for (int i = 0; i < 4; i++)  // Note: 4 rows now
    {
        for (int j = 0; j < 3; j++)  // Note: 3 columns now
        {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}