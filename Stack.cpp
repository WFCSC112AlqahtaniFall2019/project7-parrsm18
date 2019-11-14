#include "Stack.h"

Stack::Stack(){
    head= nullptr;
}
void Stack::push_head(const Data &insert) { //Attaches newNode to head of list
    Node* newNode = new Node(insert);
    newNode->next = head;
    head = newNode;
}

bool Stack::pop_head() {
    if (head == nullptr){ //If stack is empty
        return false;
    }
    else {
        Node* toDelete = head;
        head = head->next;
        delete(toDelete);
        return true;
    }
}

