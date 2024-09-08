#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    int even = 0;
    int odd = 0;
    cout<<"Enter the array elements: ";
    for (int i=0;i<n;i++){
        cin>>arr[i];
        if (arr[i]%2==0) even++;
        else odd++;
    }
    cout<<"Number of odd numbers: "<<odd<<endl;
    cout<<"Number of even numbers: "<<even;
}
