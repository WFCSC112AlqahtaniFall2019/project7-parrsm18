#include "Queue.h"
Queue::Queue() {
    head = nullptr;
    tail = nullptr;
}

void Queue::enqueue_tail(const Data &insert) {
    Node* newNode = new Node(insert);
    if (head == nullptr){ //If queue is empty
        head= newNode ;
        tail = newNode;
    }
    else{ //Else puts newNode to tail
       tail->next=newNode;
       tail=newNode;
    }
}

bool Queue::dequeue_head() {
    if(head->next == tail){ //If queue is empty
        return false;
    }
    else{ //Else dequeue element
        Node* toDelete = head;
        head = head->next;
        delete(toDelete);
        return true;
    }
}