#include <bits/stdc++.h>
using namespace std;

int stringLength(const string& str){
    int count = 0;
    for (int i : str) count++;
    return count;
}
int main(){
    string str;
    getline(cin,str);
    cout<<stringLength(str);
}
