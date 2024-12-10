#ifndef NODE_H
#define NODE_H

#include <iostream>
using namespace std;

class Node {
private:
    double data;
    int weight;
    Node* lchild;
    Node* rchild;

public:
    Node(double value);
    double getData() const;
    int getWeight() const;
    Node* getLchild() const;
    Node* getRchild() const;
    void insertR(int value);
    void insertI(int value);
    bool searchR(int value) const;
    bool searchI(int value) const;
    void inOrder() const;
    void preOrder() const;
    void postOrder() const;
    Node* deleteNode(int k);
    friend ostream& operator<<(ostream& os, const Node& node);
    friend istream& operator>>(istream& is, Node& node);
};

#endif // NODE_H
