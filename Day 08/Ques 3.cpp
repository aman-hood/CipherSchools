#include <bits/stdc++.h>
using namespace std;

string concatenateStrings(const string &str1, const string &str2){
    return str1+str2;
}
int main(){
    string str1, str2;
    getline(cin,str1);
    getline(cin,str2);
    cout<<concatenateStrings(str1,str2);
}
