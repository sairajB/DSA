#include <bits/stdc++.h>
using namespace std;

int stringToNum(string s)
{
    int ans = 0;
    for (int i = 0; i < s.size(); i++)
    {
        char c = s[i];
        int n = c - '0';
        ans = (ans * 10) + n;
    }
    return ans;
}

int main()
{
    string s = "9999";
    int sol = stringToNum(s);
    cout << sol;
}