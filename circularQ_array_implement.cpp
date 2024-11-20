#include <iostream>
using namespace std;

struct C_Queue {
    int Front, rear, cap;
    int *Q;

    C_Queue(int c) {
        Front = -1;
        rear = -1;
        cap = c;
        Q = new int[cap];
    }

    void enqueue(int x) {
        if ((Front == 0 && rear == cap - 1) || (rear + 1 == Front)) {
            cout << "\nQueue is Full" << endl;
            return;
        } else if (Front == -1) { // Queue is empty
            Front = rear = 0;
            Q[rear] = x;  // Fixed assignment
            cout << endl << "Queue was empty, inserted first element" << endl;
        } else if (rear == cap - 1 && Front != 0) { // Wrap around
            rear = 0;
            Q[rear] = x;
            cout << endl << "Rear reached the end, wrapped to 0" << endl;
        } else { // Normal enqueue
            rear++;
            Q[rear] = x;
            cout << endl << "Enqueue success" << endl;
        }
    }

    int dequeue() {
        if (Front == -1) {
            cout << "Queue is Empty" << endl;
            return -1;
        }

        int data = Q[Front];
        if (Front == rear) { // Only one element was present
            Front = rear = -1;
            cout << "One element was left, now queue is empty!" << endl;
        } else if (Front == cap - 1) { // Wrap around front
            Front = 0;
            cout << "Front reached the end, wrapped to 0" << endl;
        } else { // Normal dequeue
            Front++;
            cout << "Dequeue success!" << endl;
        }
        return data;  // Corrected return value
    }
};

int main() {
    C_Queue s(3);

    s.dequeue(); // Queue is empty initially
    s.enqueue(5);
    s.enqueue(15);
    s.enqueue(50);
    s.enqueue(45); // This will print "Queue is Full"

    cout << s.dequeue() << endl; // 5
    cout << s.dequeue() << endl; // 15
    cout << s.dequeue() << endl; // 50
}
