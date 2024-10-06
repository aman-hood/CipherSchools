#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int &i : arr) cin>>i;
    int count = 0;
    int maxCount = 0;
    for (int i=0;i<n;i++){
        if (arr[i]==1) count++;
        else{
            if (maxCount<count) maxCount = count;
            count = 0;
        }
    }
    if (maxCount<count) maxCount = count;
    cout<<maxCount;
}
