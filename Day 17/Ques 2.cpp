#include <iostream>
using namespace std;

int main(){
    int m,n;
    cin>>m>>n;
    int arr[m][n];
    int sum = 0;
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            cin>>arr[i][j];
            sum += arr[i][j];
        }
    }
    cout<<"Sum of all elements: "<<sum;
}
