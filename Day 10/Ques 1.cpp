#include <bits/stdc++.h>
using namespace std;

int findMax(const int arr[], int size){
    int max = INT_MIN;
    for (int i=0;i<size;i++){
        if (max<arr[i]) max = arr[i];
    }
    return max;
}
int main(){
    int n;
    cin>>n;
    if (n<=0){
        cout<<"Invalid Size";
        return 0;
    }
    int arr[n];
    for (int &i : arr) cin>>i;
    cout<<findMax(arr,n);
}
