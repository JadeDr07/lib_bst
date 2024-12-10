#include "Node.h"
using namespace std;

Node::Node(double value) : data(value), weight(1), lchild(nullptr), rchild(nullptr) {}

double Node::getData() const {
    return data;
}

int Node::getWeight() const {
    return weight;
}

Node* Node::getLchild() const {
    return lchild;
}

Node* Node::getRchild() const {
    return rchild;
}

void Node::insertR(int value) {
    if (value < data) {
        if (lchild == nullptr) {
            lchild = new Node(value);
        } else {
            lchild->insertR(value);
        }
    } else if (value > data) {
        if (rchild == nullptr) {
            rchild = new Node(value);
        } else {
            rchild->insertR(value);
        }
    }
}

bool Node::searchR(int value) const {
    if (value == data) {
        return true;
    } else if (value < data && lchild != nullptr) {
        return lchild->searchR(value);
    } else if (value > data && rchild != nullptr) {
        return rchild->searchR(value);
    }
    return false;
}

void Node::inOrder() const {
    if (lchild != nullptr) {
        lchild->inOrder();
    }
    cout << data << " ";
    if (rchild != nullptr) {
        rchild->inOrder();
    }
}

void Node::preOrder() const {
    cout << data << " ";
    if (lchild != nullptr) {
        lchild->preOrder();
    }
    if (rchild != nullptr) {
        rchild->preOrder();
    }
}

void Node::postOrder() const {
    if (lchild != nullptr) {
        lchild->postOrder();
    }
    if (rchild != nullptr) {
        rchild->postOrder();
    }
    cout << data << " ";
}

Node* N
