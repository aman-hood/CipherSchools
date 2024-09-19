#include <iostream>
using namespace std;

class Node{
public:
    int val;
    Node* next;
    Node(int val) : val(val) , next(nullptr) {}
};
void display(Node* &h){
    Node* temp = h;
    while (temp){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
void insertNode(Node* &h){
    int v;
    cin>>v;
    Node* t = new Node(v);
    Node* temp = h;
    while (temp->next){
        temp = temp->next;
    }
    temp->next = t;
}
void deleteNode(Node* &h,int delVal){
    if (h->val==delVal){
        h = h->next;
        return;
    }
    Node* temp = h;
    while (temp->next->val!=delVal && temp){
        temp = temp->next;
    }
    temp->next = temp->next->next;
}
int main(){
    int n;
    cin>>n;
    int v;
    cin>>v;
    Node* h = new Node(v);
    for (int i=1;i<n;i++){
        insertNode(h);
    }
    int delVal;
    cout<<"Enter value to be removed: ";
    cin>>delVal;
    cout<<"Original List: ";
    display(h);
    deleteNode(h,delVal);
    cout<<"Updated List: ";
    display(h);
}
