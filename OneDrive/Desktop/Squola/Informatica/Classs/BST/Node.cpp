#include "Node.h"

Node::Node(double data){
    this->data = data;
    weight = 0;
}

double Node::getData(){
    return data;
}
int Node::getWeight(){
    return weight;
}
Node* Node::getLchild(){
    return lchild;
}
Node* Node::getRchild(){
    return rchild;
}

Node* Node::insertR(int k){
    if(this == nullptr){
        return new Node(k);
    }
    if(k > this->data){
        this->rchild = insertR(k);
    } else if(k < this->data){
        this->lchild = insertR(k);
    } else {
        this->weight++;
    }
    return this;
}

void Node::inOrder() {
    if(this == nullptr) return;

    if(this->lchild != nullptr){
        this->lchild->inOrder();
    }
    cout << this->data << " ";

    if(this->rchild != nullptr){
        this->rchild->inOrder();
    }
}
