#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Solution
{
public:
    bool isVowel(char ch)
    {
        return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
    }
    string sortVowels(string s)
    {
        string temp;

        for (char &ch : s)
        {
            if (isVowel(ch))
            {
                temp.push_back(ch);
            }
        }

        sort(begin(temp), end(temp));
        int j = 0;

        for (int i = 0; i < s.size(); i++)
        { // Fixed the loop condition
            if (isVowel(s[i]))
            {
                s[i] = temp[j];
                j++;
            }
        }
        return s;
    }
};

int main()
{
    Solution solution;
    string input = "biuAAC";
    string result = solution.sortVowels(input);
    cout << "Original string: " << input << endl;
    cout << "String with sorted vowels: " << result << endl;
    return 0;
}