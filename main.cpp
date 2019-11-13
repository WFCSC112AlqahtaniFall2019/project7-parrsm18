#include <iostream>
#include <fstream>
#include "LinkedList.h"
#include "Data.h"
#include "Stack.h"
#include "Queue.h"
#include "SortedLinkedList.h"
using namespace std;

int main() {
    Stack list;
    Queue cue;
    SortedLinkedList sortedList;

    ifstream in;
    ofstream stack;
    ofstream queue;
    ofstream sort;

    in.open("videogamesales.csv");

    stack.open("stacked.txt");
    queue.open("queue.txt");
    sort.open("sort.txt");

    if (!in.is_open()){
        cout << "Input file not opened correctly" << endl;
        return -1;
    }
    if (!stack.is_open()){
        cout << "Stack file not opened correctly" << endl;
        return -1;
    }
    if (!queue.is_open()){
        cout << "Queue file not opened correctly" << endl;
        return -1;
    }
    if (!sort.is_open()){
        cout << "Sort file not opened correctly" << endl;
        return -1;
    }

    string rank;
    string name;
    string year;
    string globalSales;

    getline(in, rank, ',');
    getline(in, name, ',');
    getline(in, year, ',');
    getline(in, globalSales);

    stack << rank << " " << name << " " << year << " " << globalSales << endl;
    queue << rank << " " << name << " " << year << " " << globalSales << endl;
    sort << rank << " " << name << " " << year << " " << globalSales << endl;

    while(!in.eof()){

        getline(in, rank, ',');

        getline(in, name, ',');

        getline(in, year, ',');

        getline(in, globalSales);
        //rank name sales year

        Data videoGame (stod(rank), name,stod(globalSales) , stoi(year));

        list.push_head(videoGame);
        cue.enqueue_tail(videoGame);

        sortedList.insertSorted(videoGame);
    }

    list.print(stack);
    cue.print(queue);
    sortedList.print(sort);

    while(list.pop_head()){
        //Popping and Printing
    }

    while(cue.dequeue_head()){
        //Dequeue and print
    }

    /*while(sortedList.printSortedList(sort)){
        //Prints through list
    }*/


    in.close();
    stack.close();
    queue.close();
    sort.close();
    return 0;
}