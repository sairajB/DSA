#include <bits/stdc++.h>
using namespace std;

int num(char c)
{
    if (c == 'I')
    {
        return 1;
    }
    if (c == 'V')
    {
        return 5;
    }
    if (c == 'X')
    {
        return 10;
    }
    if (c == 'L')
    {
        return 50;
    }
    if (c == 'C')
    {
        return 100;
    }
    if (c == 'D')
    {
        return 500;
    }
    else
    {
        return 1000;
    }
}

int romanToInt(string s)
{
    int sum = 0;
    int index = 0;

    while (index < s.size() - 1)
    {
        if (num(s[index]) < num(s[index+1]))
        {
            sum -= num(s[index]);
        }
        else
        {
            sum += num(s[index]);
        }
        index++;
    }
    sum += num(s[index]);

    return sum;
}

int main()
{
    string roman;
    cout << "Enter a Roman numeral: ";
    cin >> roman;

    int integer = romanToInt(roman);
    cout << "Integer value: " << integer << endl;

    return 0;
}