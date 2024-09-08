#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    int sum = 0;
    cout<<"Enter the array: ";
    for (int i=0;i<n;i++){
        cin>>arr[i];
        sum += arr[i];
    }
    cout<<"Sum of the array: "<<sum;
}
