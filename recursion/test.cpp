#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(vector<int> arr)
{
    int s = 0;
    int e = arr.size()-1;

    while (s < e)
    {
        if (arr[s] == arr[e])
        {
            s++;
            e--;
        }
        else
        {
            return false;
        }
    }
    return true;
}

int main(){
    vector<int> s = {1,2,2,1,1};

    cout<< isPalindrome(s);

    //return ans;
}