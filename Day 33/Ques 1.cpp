#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    string s;
    cin>>s;
    
    unordered_map<char,int> m;
    for (auto x : s) m[x]++;
    s = "";
    
    while (m.size()>0){
        int max = 0;
        char ch;
        for (auto x : m){
            if (max<x.second){
                max = x.second;
                ch = x.first;
            }
        }
        while (max>0){
            s += ch;
            max--;
        }
        m.erase(ch);
    }
    cout<<s;
}
