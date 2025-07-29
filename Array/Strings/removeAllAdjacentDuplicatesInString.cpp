#include <bits/stdc++.h>
using namespace std;

string removeDuplicates(string s) {
    string ans = "";
    int n = s.size();

    for (int i = 0; i < n; i++) {
        char ch = s[i];

        if (ans.empty()) {
            ans.push_back(ch);
        } else if (ch != ans.back()) {
            ans.push_back(ch);
        } else {
            ans.pop_back();
        }
    }
    return ans;
}

int main() {
    // Test cases
    string test1 = "abbaca";
    string test2 = "azxxzy";
    string test3 = "aabbcc";
    string test4 = "abccba";
    string test5 = "aab";
    
    cout << "Test 1: \"" << test1 << "\" -> \"" << removeDuplicates(test1) << "\"" << endl;
    cout << "Test 2: \"" << test2 << "\" -> \"" << removeDuplicates(test2) << "\"" << endl;
    cout << "Test 3: \"" << test3 << "\" -> \"" << removeDuplicates(test3) << "\"" << endl;
    cout << "Test 4: \"" << test4 << "\" -> \"" << removeDuplicates(test4) << "\"" << endl;
    cout << "Test 5: \"" << test5 << "\" -> \"" << removeDuplicates(test5) << "\"" << endl;
    
    // Interactive input
    cout << "\nEnter a string to remove adjacent duplicates: ";
    string input;
    cin >> input;
    
    string result = removeDuplicates(input);
    cout << "Result: \"" << result << "\"" << endl;
    
    return 0;
}