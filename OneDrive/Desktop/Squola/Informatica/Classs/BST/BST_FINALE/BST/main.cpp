#include <iostream>
#include "Node.h"
using namespace std;

int main() {
    Node root(10);

    root.insertR(5);
    root.insertR(15);
    root.insertR(3);
    root.insertR(7);


    cout << "Pre-Order Traversal: ";
    root.preOrder();

    cout << "Post-Order Traversal: ";
    root.postOrder();

    root.deleteNode(7);
    root.inOrder();


    return 0;
}
