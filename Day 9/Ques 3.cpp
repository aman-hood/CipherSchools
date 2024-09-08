#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int* ptr = &n;
    int** ptrToPtr = &ptr;
    cout<<"Using Variable: "<<n<<endl;
    cout<<"Using Pointer: "<<*ptr<<endl;
    cout<<"Using Pointer to Pointer: "<<**ptrToPtr;
}
