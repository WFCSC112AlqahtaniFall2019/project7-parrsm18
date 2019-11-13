//
// Created by Steven on 11/7/2019.
//
#include "Data.h"
#include <iostream>

Data::Data(double rank, string name, double sales, int year) {
    rankP = rank;
    nameP = name;
    salesP = sales;
    yearP = year;
}

const ostream& operator<<( ostream &os, Data d) {
    os << d.nameP << ", Year: " << d.yearP << " Rank: " << d.rankP << " Sales: " << d.salesP << endl;
    return os;
}

bool Data::operator<(Data &rhs) {
    return this->yearP < rhs.yearP;
}

bool Data::operator>(Data &rhs) {
    return this->yearP > rhs.yearP;
}

