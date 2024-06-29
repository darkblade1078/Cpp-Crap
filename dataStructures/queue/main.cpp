#include <iostream>
#include "queue.h"

using namespace std;

int main() {

    Queue<int> q;

    q.enQueue(69);
    q.enQueue(420);

    cout << "The front is: " << q.getFront() << endl;
    cout << "The rear is: " << q.getRear() << endl;

    cout << endl;

    q.enQueue(123);
    q.deQueue();

    cout << "The front is: " << q.getFront() << endl;
    cout << "The rear is: " << q.getRear() << endl;

    return 0;
}