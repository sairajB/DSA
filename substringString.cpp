// aavajvjaThenakaavatheeetheeethethevhTHEakbajatheBbjkabatHebkjeb
#include <bits/stdc++.h>
using namespace std;

int occCount(string str, string target)
{
    int n = target.length();
    int ans = 0;
    if (str.length() < target.length())
        return -1;

    for (int i = 0; i < str.size() - n; i++)
    {
        string temp = str.substr(i, n);
        transform(temp.begin(), temp.end(), temp.begin(), ::tolower);
        if (temp == target)
            ans++;
    }
    return ans;
}

int main()
{
    string str = "aavajvjaThenakaavatheeetheeethethevhTHEakbajatheBbjkabatHebkjeb";
    string tar = "the";
    int ans = occCount(str, tar);
    cout << ans;
}