//Steven Parrill

#include <iostream>
#include <fstream>
#include "Data.h"
#include "Stack.h"
#include "Queue.h"
#include "SortedLinkedList.h"
using namespace std;

int main() {
    //Initializes objects
    Stack list;
    Queue cue;
    SortedLinkedList sortedList;

    //Initializes input and output streams
    ifstream in;
    ofstream stack;
    ofstream queue;
    ofstream sort;

    //Opens files
    in.open("videogamesales.csv");
    stack.open("stacked.txt");
    queue.open("queue.txt");
    sort.open("sort.txt");

    //Checks to see if files have been opened properly
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

    //Reads in first line from dataset which contains the data description
    getline(in, rank, ',');
    getline(in, name, ',');
    getline(in, year, ',');
    getline(in, globalSales);

    stack << rank << " " << name << " " << year << " " << globalSales << endl;
    queue << rank << " " << name << " " << year << " " << globalSales << endl;
    sort << rank << " " << name << " " << year << " " << globalSales << endl;

    cout << "Reading ../videogamesales.csv..." << endl;
    while(!in.eof()){
        getline(in, rank, ',');
        getline(in, name, ',');
        getline(in, year, ',');
        getline(in, globalSales);

        //Creates new data object
        Data videoGame (stod(rank), name, stod(globalSales), stoi(year));

        //Pushes new data object to stack, queue, and sorted list
        list.push_head(videoGame);
        cue.enqueue_tail(videoGame);
        sortedList.insertSorted(videoGame);
    }
    cout << "Writing data in stack inserted at head into stacked.txt" << endl;
    list.print(stack);
    cout << "Writing data in queue inserted at tail into queue.txt" << endl;
    cue.print(queue);
    cout << "Writing data in sorted linked list sorted by year into sort.txt" << endl;
    sortedList.print(sort);

    while(list.pop_head()){
        //Pops elements
    }

    while(cue.dequeue_head()){
        //Dequeue elements
    }

    //Close files
    in.close();
    stack.close();
    queue.close();
    sort.close();

    return 0;
}