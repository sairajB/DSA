#include <bits/stdc++.h>
using namespace std;

int main(){
    string s = "sai-raj!1";
    // Example: count alphabetic characters in the string
    int alphaCount = 0;
    for(char c : s){
        if(isalpha(c)) alphaCount++;
    }
    // You can use alphaCount or process as needed
    cout<<alphaCount;
}