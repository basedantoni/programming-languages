#include "Node.h"
#include <iostream>
using namespace std;

int main() {
    Node<int>* node1 = new Node<int>(5);
    Node<int>* node2 = new Node<int>(10);

    node1->setNext(node2);

    cout << node1->getValue() << endl;
    cout << (node1->getNext() != nullptr ? node1->getNext()->getValue() : -1) << endl;
    cout << (node2->getNext() != nullptr ? node2->getNext()->getValue() : -1) << endl;

    // Clean up
    delete node1;
    delete node2;

    return 0;
}
