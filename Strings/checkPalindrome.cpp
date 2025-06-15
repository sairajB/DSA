#include <iostream>
using namespace std;

bool checkPalindrome(char name[], int size) {
    int start = 0;
    int end = size - 1;

    // Fixing the palindrome check logic
    while (start < end) {
        if (name[start] != name[end]) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int main() {
    char name[100];
    cout << "Enter a word: ";
    cin >> name;

    int size = 0;
    // Calculating the size of the string
    while (name[size] != '\0') {
        size++;
    }

    if (checkPalindrome(name, size)) {
        cout << name << " is a palindrome." << endl;
    } else {
        cout << name << " is not a palindrome." << endl;
    }

    return 0;
}
