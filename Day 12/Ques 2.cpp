#include <bits/stdc++.h>
using namespace std;

struct Node {
    int val;
    Node* next;
    Node(int val) : val(val), next(nullptr) {}
};
void printLinkedList(Node* head) {
    Node* temp = head;
    while (temp) {
        cout<<temp->val<<" ";
        temp = temp->next;
    }
}
void insertAtEnd(Node*& head, int data) {
    Node* temp = new Node(data);
    if (head == nullptr) head = temp;
    else {
        Node* current = head;
        while (current->next) current = current->next;
        current->next = temp;
    }
}
int main() {
    int data;
    cin>>data;
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);

    insertAtEnd(head, data);
    printLinkedList(head);
}
