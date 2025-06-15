#include <iostream>
using namespace std;

int main()
{
    int r = 3;
    int c = 3;
    int i = 0;
    int j = 0;
    while (i < r)
    {
        j = 0;
        while (j < c)
        {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }
}