//
// Created by Steven on 11/7/2019.
//574

#include "Stack.h"

Stack::Stack(){
}
void Stack::push_head(const Data &insert) {
    if (head == nullptr || head->next == nullptr){
        Node* newNode = new Node(insert);
        head->next = newNode;
        newNode->next = nullptr;
    }
    else{
        Node* newNode = new Node(insert);
        newNode->next = head->next;
        head->next = newNode;
    }
}

bool Stack::pop_head() {
    if (head == nullptr){
        return false;
    }
    else {
        Node* temp = head;
        head = head->next;
        delete(temp);
        return true;
    }
}