#include "SortedLinkedList.h"

void SortedLinkedList::insertSorted(Data toSort) {
    Node* iterator;
    Node* prev;
    Node* newNode = new Node(toSort);

    if (head == nullptr){ //If list is empty
        newNode->next = head;
        head = newNode;
    }
    else {
        if (newNode->data < head->data) { //If new node needs to be inserted before head
            newNode->next = head;
            head = newNode;
        }
        else { //New node needs to be inserted in between to elements
            iterator = head;
            while (iterator != nullptr && newNode->data > iterator->data ) {
                prev=iterator;
                iterator = iterator->next;
            }
            prev->next=newNode;
            newNode->next=iterator;
        }
    }
}



