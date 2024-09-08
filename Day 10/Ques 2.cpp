#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(const string &str){
    string s = "";
    for (int i : str){
        if (i>=65 && i<65+26) i+=32;
        if (i>=97 && i<97+26 || i>=48 && i<58) s += str[i];
    }
    string t = s;
    reverse(s.begin(),s.end());
    if (s==t) return true;
    return false;
}
int main(){
    string str;
    getline(cin,str);
    if (isPalindrome(str)) cout<<"True";
    else cout<<"False";
}
