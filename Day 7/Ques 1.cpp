#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    for (int i=0;i<n;i++) cin>>arr[i];
    // bubble sort
    for (int i=0;i<n-1;i++){
        for (int j=0;j<n-1;j++){
            if (arr[j]>arr[j+1]) swap (arr[j],arr[j+1]);
        }
    }
    for (int i : arr) cout<<i<<" ";
}
