#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int &i : arr) cin>>i;
    int *ptr = arr;
    for (int i=0;i<n;i++){
        cout<<*ptr<<" ";
        ptr++;
    }
}
