#include <iostream>
#include "ArrayQueue.hpp"  

int main() {
    ArrayQueue<int> q(5);

    std::cout << "enqueue: 10, 20, 30\n";
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    std::cout << "front: " << q.front() << std::endl; 
    std::cout << "back: " << q.back() << std::endl;   
    std::cout << "length: " << q.getLength() << std::endl;

    std::cout << "dequeue\n";
    q.dequeue(); 

    std::cout << "New front: " << q.front() << std::endl; 
    std::cout << "Length after dequeue: " << q.getLength() << std::endl; 

    std::cout << "Enqueueing: 40, 50, 60 (should wrap around)\n";
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60); 

    std::cout << "full: " << (q.isFull() ? "yes" : "no") << std::endl; 

    std::cout << "front: " << q.front() << ", back: " << q.back() << std::endl;

    std::cout << "copy \n";
    ArrayQueue<int> qCopy(q);
    std::cout << "Copied queue front: " << qCopy.front() << ", back: " << qCopy.back() << std::endl;

    std::cout << "assignment\n";
    ArrayQueue<int> qAssign(5);
    qAssign.enqueue(999); 
    qAssign = q;
    std::cout << "front: " << qAssign.front() << ", back: " << qAssign.back() << std::endl;

    std::cout << "clearing\n";
    q.clear();
    std::cout << "is original queue empty: " << (q.isEmpty() ? "yes" : "no") << std::endl;

    return 0;
}
