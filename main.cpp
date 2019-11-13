#include <iostream>
#include <fstream>
#include "LinkedList.h"
#include "Data.h"
#include "Stack.h"
#include "Queue.h"
#include "SortedLinkedList.h"
using namespace std;

int main() {
    Stack* list = new Stack;
    Queue cue;

    ifstream in;
    ofstream stack;
    ofstream queue;
    ofstream sort;

    in.open("vgsales.csv");
    stack.open("stack.txt");
    queue.open("queue.txt");
    sort.open("sort.txt");

    if (!in.is_open()){

    }


    while(in.good()){
        string rank;
        getline(in, rank, ',');

        string name;
        getline(in, name, ',');

        string year;
        getline(in, year, ',');

        string globalSales;
        getline(in, globalSales, ',');
        //rank name sales year

        Data videoGame = Data(stoi(rank), name, stoi(globalSales), stoi(year));
        list->push_head(videoGame);
    }

    in.close();
    stack.close();
    queue.close();
    sort.close();
}