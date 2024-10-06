#include <iostream>
#include <algorithm>
using namespace std;

// Time complexity = O(n^2)
bool twoSum_n2(int arr[],int n,int target){
    for (int i=0;i<n-1;i++){
        for (int j=i+1;j<n;j++){
            if (arr[i]+arr[j]==target){
                return true;
            }
        }
    }
    return false;
}

// Time complexity = O(n*logn)
bool twoSum_nlogn(int arr[],int n,int target){
    sort(arr, arr + n);
    int left = 0;
    int right = n - 1;

    while (left < right) {
        int sum = arr[left] + arr[right];
        if (sum == target) return true;
        else if (sum < target) left++;
        else right--;
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int &i : arr) cin>>i;
    int target;
    cin>>target;
    bool flag;
    // flag = twoSum_n2(arr,n,target);
    flag = twoSum_nlogn(arr,n,target);
    if (flag) cout<<"TRUE";
    else cout<<"FALSE";
}
