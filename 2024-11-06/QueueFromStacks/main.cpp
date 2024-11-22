#include <iostream>
#include "queue.h"

int main() {
    Queue<int> q;
    q.enqueue(4);
    q.enqueue(1);
    q.enqueue(0);
    q.enqueue(29);
    q.enqueue(16);
    q.enqueue(5);

    while (!q.is_empty()) {
        std::cout << q.dequeue() << ' ';
    }
    std::cout << '\n';
}
