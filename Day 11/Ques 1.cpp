#include <bits/stdc++.h>
using namespace std;

bool findTarget(int arr[], int size, int target){
    for (int i=0;i<size;i++) if (arr[i]==target) return 1;
    return 0;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int &i : arr) cin>>i;
    int target;
    cin>>target;
    
    if (findTarget(arr,n,target)) cout<<"YES";
    else cout<<"NO";
}
