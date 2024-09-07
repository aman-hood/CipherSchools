#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int *ptr = &n;
    cout<<"Using Variable: "<<n<<endl;
    cout<<"Using Pointer: "<<*ptr;
}
