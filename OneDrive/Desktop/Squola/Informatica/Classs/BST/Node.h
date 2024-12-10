#ifndef NODE_20241104
#define NODE_20241104

#include <iostream>

using namespace std;

class Node{
private:
    double data;
    int weight;
    Node* lchild;
    Node* rchild;

public:
    Node(double data);
    double getData();
    int getWeight();
    Node* getLchild();
    Node* getRchild();

    Node* insertR(int k);
    void inOrder();
};

#endif // NODE_20241104
