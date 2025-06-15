#include <iostream>
#include <string>

using namespace std;

string defangIPaddr(string address) {
    string ans;
    int index = 0;

    while(index < address.size()){
        if(address[index] == '.'){
            ans += "[.]";
        }else{
            ans += address[index];
        }
        index++;
    }
    return ans;
}

int main() {
    string ip = "1.1.1.1.1";
    string defangedIP = defangIPaddr(ip);
    cout << "Defanged IP: " << defangedIP << endl;
    return 0;
}