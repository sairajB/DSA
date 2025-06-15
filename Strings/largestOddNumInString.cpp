#include <iostream>
#include <string>
using namespace std;

string largestOddNumber(string num) {
    int n = num.length();

    // Loop through the string from the last character to the first
    for (int i = n - 1; i >= 0; i--) {
        // Check if the character is an odd digit
        if ((num[i] - '0') % 2 != 0) {
            // Return the substring that ends at the current index
            return num.substr(0, i + 1);
        }
    }

    // If no odd digit is found, return an empty string
    return "";
}

int main() {
    string num;

    // Input the number string
    cout << "Enter a number: "; 
    cin >> num;

    // Call the function and print the largest odd number substring
    string result = largestOddNumber(num);
    
    if (!result.empty()) {
        cout << "Largest odd number: " << result << endl;
    } else {
        cout << "No odd number found in the string." << endl;
    }

    return 0;
}
