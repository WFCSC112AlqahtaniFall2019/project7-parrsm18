//
// Created by Steven on 11/7/2019.
//
#include "SortedLinkedList.h"

void SortedLinkedList::insertSorted(Data toSort) {
    Node* temp;
    Node* previous = head;
    Node* curr = head->next;
    Node* newNode = new Node(toSort);

    if (head->next == nullptr || head == nullptr){ // Returns if the list is of size 0 or 1. A list of this size would inherently be sorted
        return;
    }

    while (curr != nullptr){ //Iterates until it gets to the node that points to null
        if(newNode->data > previous->data){ // If the current value is already greater than or equal to the previous value than no nodes need to be switched
            previous = previous->next; // Moves previous to the next node
            curr = curr->next; // Moves current to the next node
        }
        else { // This branch is entered when the value of the current node is less than the previous node
            if(newNode->data < head->data){ // This branch is entered if the node that needs to be moved is less than the head in which case the head pointer needs to manipulated
                previous->next = curr->next; // Links the previous node to the node after the current node
                curr->next = nullptr; // breaks the connection between current and the next node
                newNode->next = head; // Links the current node to the head
                head = newNode; // Sets the head equal to the current node at the beginning of the list
            }
            else{ // This branch is entered when the node that needs to be moved is not less than the head and needs to be inserted somewhere else in the list
                temp = head; // Sets temp to the beginning of the list
                while (newNode->data > temp->next->data && temp->next != nullptr){ // Iterates over the list and sets temp to the location that the current node needs to be set to
                    temp = temp->next; // Moves temp forward to the next node
                }
                previous->next = curr->next; // Links the previous node to the node after the current node
                curr->next = nullptr; // breaks the connection between current and the next node
                newNode->next = temp->next; // Links the current node that needs to be inserted to the node after temporary
                temp->next = newNode; // Links temporary to the current node which was just relocated
            }
        }
        curr = previous->next; // Moves current one position ahead of previous
    }
}

