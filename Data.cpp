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
    if (this->yearP < rhs.yearP){
        return this->yearP < rhs.yearP;
    }
    else if(this->salesP < rhs.salesP){
        return this->salesP < rhs.salesP;
    }
    else if(this->rankP < rhs.rankP){
        return this->rankP < rhs.rankP;
    }
    else {
        return this->nameP < rhs.nameP;
    }
}

bool Data::operator>(Data &rhs) {
    if (this->yearP > rhs.yearP){
        return this->yearP > rhs.yearP;
    }
    else if(this->salesP > rhs.salesP){
        return this->salesP > rhs.salesP;
    }
    else if(this->rankP > rhs.rankP){
        return this->rankP > rhs.rankP;
    }
    else{
        return this->nameP > rhs.nameP;
    }
}

