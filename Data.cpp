//
// Created by Steven on 11/7/2019.
//
#include "Data.h"
#include <iostream>

Data::Data(int rank, string name, int sales, int year) {
    rankP = rank;
    nameP = name;
    salesP = sales;
    yearP = year;
}

const ostream& Data::operator<<(ostream &os) {
    os << nameP << ", " << yearP << " Rank: " << rankP << " Sales: " << salesP;
    return os;
}

bool Data::operator<(Data &rhs) {
    return this->nameP < rhs.nameP;
}

bool Data::operator>(Data &rhs) {
    return this->nameP > rhs.nameP;
}

