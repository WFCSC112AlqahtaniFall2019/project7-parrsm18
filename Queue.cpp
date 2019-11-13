//
// Created by Steven on 11/7/2019.
//
#include "Queue.h"
Queue::Queue() {
    head->next = tail;
    tail->next = nullptr;
}

void Queue::enqueue_tail(const Data &insert) {
    if (head->next == tail){
        Node* newNode = new Node(insert);
        newNode->next = tail;
        head->next = newNode;
    }
    else{
        Node* iterator = head->next;
        Node* newNode = new Node(insert);
        while(iterator->next != tail){
            iterator = iterator->next;
        }
        newNode->next = tail;
        iterator->next = newNode;
    }
}

bool Queue::dequeue_head() {
    if(head->next == tail){
        return false;
    }
    else{
        Node* temp = head;
        head = head->next;
        delete(temp);
        return true;
    }
}


