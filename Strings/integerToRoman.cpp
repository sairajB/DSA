#include <bits/stdc++.h>
using namespace std;

string intToRoman(int num)
{
    static vector<int> val{1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    static vector<string> sys{"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    string result = "";

    for(int i = 0; i < 13; i++){
        if(num == 0)
            break;

        int times = num / val[i];

        while(times--){
            result += sys[i];
        }
        num = num % val[i];
    }
    return result;
}

int main()
{
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    string roman = intToRoman(num);
    cout << "Roman numeral: " << roman << endl;

    return 0;
}