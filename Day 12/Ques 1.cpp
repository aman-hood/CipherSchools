#include <bits/stdc++.h>
using namespace std;

struct Node{
    int val;
    Node* next;
    Node(int val) : val(val), next(NULL) {}
};
void printLinkedList(Node* head){
    Node* temp = head;
    while (temp){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
}
int main(){
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);
    
    a.next = &b;
    b.next = &c;
    c.next = &d;
    
    printLinkedList(&a);
}
