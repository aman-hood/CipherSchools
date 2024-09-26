#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;
    Node(int value) {
        data = value;
        next = nullptr;
        prev = nullptr;
    }
};

class DoublyLinkedList {
private:
    Node* head;
    Node* tail;
public:
    DoublyLinkedList() {
        head = nullptr;
        tail = nullptr;
    }
    void insertAtPosition(int p, int x) {
        Node* newNode = new Node(x);
        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        } else {
            Node* temp = head;
            int pos = 0;
            while (temp != nullptr && pos < p) {
                temp = temp->next;
                pos++;
            }
            if (temp == nullptr) {
                tail->next = newNode;
                newNode->prev = tail;
                tail = newNode;
            } else {
                newNode->next = temp->next;
                newNode->prev = temp;
                if (temp->next != nullptr) {
                    temp->next->prev = newNode;
                } else {
                    tail = newNode;
                }
                temp->next = newNode;
            }
        }
    }

    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    DoublyLinkedList dll;
    dll.insertAtPosition(0, 2);
    dll.insertAtPosition(1, 4);
    dll.insertAtPosition(2, 5);
    dll.display();
    dll.insertAtPosition(2, 6);
    dll.display();
} 
