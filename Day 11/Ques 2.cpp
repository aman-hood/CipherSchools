#include <bits/stdc++.h>
using namespace std;

int findTargetIdx(int arr[], int size, int target){
    for (int i=0;i<size;i++) if (arr[i]==target) return i+1;
    return -1;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int &i : arr) cin>>i;
    int target;
    cin>>target;
    
    cout<<findTargetIdx(arr,n,target);
}
