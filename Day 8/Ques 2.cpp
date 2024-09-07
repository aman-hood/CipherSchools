#include <bits/stdc++.h>
using namespace std;

int countCharacter(const string& str, char ch){
    int count = 0;
    for (int i : str) if (i==ch) count++;
    return count;
}
int main(){
    string str;
    getline(cin,str);
    char ch;
    cin>>ch;
    cout<<countCharacter(str,ch);
}
