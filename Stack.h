//
// Created by Steven on 11/7/2019.
//

#ifndef PROJECT7_STACK_H
#define PROJECT7_STACK_H

#include "LinkedList.h"
class Stack: public LinkedList{
public:
    Stack();
    void push_head(const Data &insert);
    bool pop_head();
    //void print(ostream &os);
};
#endif //PROJECT7_STACK_H
