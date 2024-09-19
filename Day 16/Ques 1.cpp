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
void insertNewNode(Node* &h,int newVal){
    Node* t = new Node(newVal);
    if (!h || h->val>newVal){
        t->next = h;
        h = t;
        return;
    }
    Node* temp = h;
    while(temp->next){
        if (temp->next->val>=newVal){
            Node* n = temp->next;
            temp->next = t;
            t->next = n;
            return;
        }
        temp = temp->next;
    }
    temp->next = t;
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
    int newVal;
    cout<<"Enter value to be inserted: ";
    cin>>newVal;
    cout<<"Original List: ";
    display(h);
    insertNewNode(h,newVal);
    cout<<"Updated List: ";
    display(h);
}
