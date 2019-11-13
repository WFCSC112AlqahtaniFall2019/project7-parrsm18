//
// Created by Steven on 11/7/2019.
//
#include "SortedLinkedList.h"

void SortedLinkedList::insertSorted(Data toSort) {
    Node* iterator;
    Node* prev;

    Node* newNode = new Node(toSort);

    if (head == nullptr){ // Returns if the list is of size 0 or 1. A list of this size would inherently be sorted
        newNode->next = head;
        head = newNode;
    }
    else {
        if (newNode->data < head->data) {
            newNode->next = head;
            head = newNode;
        }
        else {
            iterator = head;
            while (iterator != nullptr && newNode->data > iterator->data ) {
                prev=iterator;
                iterator = iterator->next;
            }
            prev->next=newNode;
            newNode->next=iterator;
          //  iterator->next = newNode;
        }
    }
}



