#ifndef PROJECT7_QUEUE_H
#define PROJECT7_QUEUE_H

#include "LinkedList.h"

class Queue: public LinkedList{
public:
    Queue();
    void enqueue_tail(const Data &insert);
    bool dequeue_head();
private:
    Node* tail;
};
#endif //PROJECT7_QUEUE_H
