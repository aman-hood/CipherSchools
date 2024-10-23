#include <iostream>
using namespace std;

struct Node{
    int val;
    Node* next;
    Node(int x) : val(x) , next(NULL) {}
};

Node* make(){
    int x;
    cin>>x;
    if (x==-1) return NULL;
    Node* newNode = new Node(x);
    newNode->next = make();
    return newNode;
}

Node* oddEvenList(Node* head) {
    if (!head || !head->next) return head;

    Node* odd = head;
    Node* even = head->next;
    Node* evenHead = even;

    while (even && even->next) {
        odd->next = even->next;
        odd = odd->next;
        even->next = odd->next;
        even = even->next;
    }
    odd->next = evenHead;
    return head;
}

void display(Node* head){
    Node* temp = head;
    while (temp){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
}

int main(){
    Node* head = make();
    oddEvenList(head);
    display(head);
}
