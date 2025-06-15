#include <bits/stdc++.h>
using namespace std;

void reverse(string s)
{
    int n = s.size();

    for (int i = 0; i < n / 2; i++)
    {
        for (int j = n - 1 - i; j > i; j--)
        {
            swap(s[i], s[j]);
            break; // Exit the inner loop after the swap
        }
    }
    cout << s << endl;
}

int main()
{
    reverse("Hello");
}