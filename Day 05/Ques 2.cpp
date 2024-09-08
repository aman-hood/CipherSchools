#include <iostream>
using namespace std;
#include <algorithm>
int main(){
    string s;
    cout<<"Enter a string: ";
    cin>>s;
    reverse(s.begin(),s.end());
    cout<<"Reversed string: "<<s;
}
