#include <iostream>
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
    int key;
    cout<<"Enter the Key element: ";
    cin>>key;
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            if (key==arr[i][j]){
                cout<<"YES";
                return 1;
            }
        }
    }
    cout<<"NO";
    return 0;
}
