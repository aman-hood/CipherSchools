#include <iostream>
using namespace std;

#define MAX 100
struct PriorityQueue {
    int value;  
    int priority; 
};

class PriorityQueueArray {
private:
    PriorityQueue pq[MAX]; 
    int size; 
public:
    PriorityQueueArray() {
        size = 0;
    }
    void enqueue(int value, int priority) {
        if (size == MAX) {
            cout << "Priority Queue is full.\n";
            return;
        }
        pq[size].value = value;
        pq[size].priority = priority;
        size++;
    }
    int findHighestPriority() {
        int highestPriority = -1;
        int index = -1;
        for (int i = 0; i < size; i++) {
            if (index == -1 || pq[i].priority < highestPriority) {
                highestPriority = pq[i].priority;
                index = i;
            }
        }
        return index;
    }
    void dequeue() {
        if (size == 0) {
            cout << "Priority Queue is empty.\n";
            return;
        }
        int index = findHighestPriority();
        for (int i = index; i < size - 1; i++) {
            pq[i] = pq[i + 1];
        }
        size--;
    }
    void display() {
        if (size == 0) {
            cout << "Priority Queue is empty.\n";
            return;
        }
        cout << "Priority Queue elements:\n";
        for (int i = 0; i < size; i++) {
            cout << "Value: " << pq[i].value << ", Priority: " << pq[i].priority << endl;
        }
    }
};

int main() {
    PriorityQueueArray pq;

    pq.enqueue(10, 2);
    pq.enqueue(20, 1);
    pq.enqueue(30, 3);

    cout << "Priority Queue after enqueue operations:\n";
    pq.display();
    
    pq.dequeue(); 
    cout << "\nPriority Queue after dequeue operation:\n";
    pq.display();
}
