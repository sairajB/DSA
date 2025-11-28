#include <bits/stdc++.h>
using namespace std;

bool maxNumChar(string s)
{
    int max = 5;
    unordered_map<char, int> map;
    for (char c : s)
    {
        map[c]++;
    }
    for (auto pair : map)
    {
        if (pair.second == max)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    string s = "aaaaa";
    bool ans = maxNumChar(s);
    cout << ans;
}