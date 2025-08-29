#include <bits/stdc++.h>
using namespace std;


class Solution
{
public:
    long long flowerGame(int n, int m)
    {
        long long oddN = (n + 1) / 2;
        long long evenN = n / 2;

        long long oddM = (m + 1) / 2;
        long long evenM = m / 2;

        return evenN * oddM + oddN * evenM;
    }
};

int main()
{
    Solution sol;
    int n, m;
    // Example input, can be replaced with user input
    n = 3;
    m = 2;
    long long result = sol.flowerGame(n, m);
    cout << "Result: " << result << endl;
    return 0;
}