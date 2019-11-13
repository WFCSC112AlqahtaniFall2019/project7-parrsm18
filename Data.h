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
    Data(int rank, string name, int sales, int year);
    const ostream& operator<<(ostream& os);
    bool operator<(Data& rhs);
    bool operator>(Data& rhs);
private:
    int rankP;
    string nameP;
    int salesP;
    int yearP;
};

#endif //PROJECT7_DATA_H
