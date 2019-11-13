//
// Created by Steven on 11/7/2019.
//

#ifndef PROJECT7_DATA_H
#define PROJECT7_DATA_H

#include <iostream>
using namespace std;
class Data{
public:
    Data() {}
    Data(double rank, string name, double sales, int year);
   friend  const ostream& operator<<( ostream& os, Data d);
    bool operator<(Data& rhs);
    bool operator>(Data& rhs);
private:
    double rankP;
    string nameP;
    double salesP;
    int yearP;
};

#endif //PROJECT7_DATA_H
