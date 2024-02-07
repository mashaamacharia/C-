#include <iostream>
using namespace std;

class Queue {
private:
    int head;
    int tail;
    int arr[100];
public:
    Queue() {
        head = -1;
        tail = -1;
    }
    void enqueue(int value) {
        if (tail == 99) {
            cout << "Queue overflow." << endl;
            return;
        }
        if (head == -1) {
            head = 0;
        }
        tail++;
        arr[tail] = value;
        cout << "Enqueued " << value << endl;
    }
    void dequeue() {
        if (head == -1) {
            cout << "Queue underflow." << endl;
            return;
        }
        cout << "Dequeued " << arr[head] << endl;
        if (head == tail) {
            head = -1;
            tail = -1;
        }
        else {
            head++;
        }
    }
};

int main() {
    Queue myQueue;
    myQueue.enqueue(10);
    myQueue.enqueue(20);
    myQueue.enqueue(30);
    myQueue.dequeue();
    myQueue.dequeue();
     myQueue.dequeue();
    myQueue.enqueue(60);
    myQueue.enqueue(70);
   
    return 0;
}
