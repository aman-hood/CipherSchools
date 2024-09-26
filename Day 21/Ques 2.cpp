#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int value) {
        data = value;
        next = nullptr;
    }
};
bool detectLoop(Node*h){
    if(!h || !h->next) return 0;
    Node*s = h;
    Node*f = h;
    while(f){
        if(!f->next) return 0;
        s = s->next;
        f = f->next->next;
        if(f == s) return 1;
    }
    return 0;
}

int main(){
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = head;
    if (detectLoop(head)) cout<<"True";
    else cout<<"False";
}
