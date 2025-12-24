#include <bits/stdc++.h>
using namespace std;

void swapNum(int s, int e, string &input)
{
    if (s >= e)
        return;
    swap(input[s], input[e]);
    swapNum(s + 1, e - 1, input);
}

int main()
{
    string rev = "1234567";
    int s = 0;
    int e = rev.size() - 1;
    swapNum(s, e, rev);
    cout << rev;
}