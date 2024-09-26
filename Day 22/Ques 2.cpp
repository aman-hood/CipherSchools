#include<iostream>
#include <stack>
using namespace std;

int main(){
    int n;
    cin>>n;
    stack<int> st;
    for (int i=0;i<n;i++){
        int x;
        cin>>x;
        st.push(x);
    }
    for (int i=0;i<n;i++){
        cout<<st.top()<<" ";
        st.pop();
    }
}
