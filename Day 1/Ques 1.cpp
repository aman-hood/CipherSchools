#include <iostream>
using namespace std;
int main(){
    string a,b;
    cout<<"Enter the first string: ";
    cin>>a;
    cout<<"Enter the second string: ";
    cin>>b;
    a +=b;
    cout<<"Concatenated string: "<<a;
}
