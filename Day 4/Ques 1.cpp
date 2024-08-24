#include <iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter first integer: ";
    cin>>a;
    cout<<"Enter second integer: ";
    cin>>b;
    
    cout<<"Addition: "<<a+b<<endl;
    cout<<"Subtraction: "<<a-b<<endl;
    cout<<"Multiplication: "<<a*b<<endl;
    if (b!=0) cout<<"Division: "<<float(a)/float(b)<<endl;
    else cout<<"Zero Division Error"<<endl;
    cout<<"Modulus: "<<a%b<<endl;
}
