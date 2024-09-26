#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int m,n;
    cin>>m>>n;
    int arr[m][n];
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int temp[m*n];
    int k = 0;
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            temp[k] = arr[i][j];
            k++;
        }
    }
    k = 0;
    sort(temp,temp+m*n);
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            arr[i][j] = temp[k];
            cout<<arr[i][j]<<" ";
            k++;
        }
        cout<<endl;
    }
}
