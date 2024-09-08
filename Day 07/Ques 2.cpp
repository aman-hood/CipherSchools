#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    for (int i=0;i<n;i++) cin>>arr[i];
    // insertion sort
    for (int i=1;i<n;i++){
        int j = i;
        while (j>=1){
            if (arr[j]>=arr[j-1]) break;
            else swap(arr[j],arr[j-1]);
            j--;
        }
    }
    for (int i : arr) cout<<i<<" ";
}
