//
// Created by roey on 11/22/18.
//



#ifndef AIRLINE_CUSTOMER_H
#include "interface.h"
#include "IDGen.cpp"
#define AIRLINE_CUSTOMER_H


class MyCustomer : public Customer {
    std::string fullName;
    int priority;
    std::list<Reservation*> reservations;
    std::string id;

public:
    MyCustomer(std::string name, int pri, std::list<Reservation *> res){
        this->fullName = name;
        this->priority = pri;
        this->reservations = res;
        this->id = 'C' + std::to_string(genID());
    }

    virtual std::string getFullName() {
        return this->fullName;
    }
    virtual int getPriority(){
        return this->priority;
    }
    virtual std::list<Reservation*> getReservations(){
        return this->reservations;
    }
    virtual std::string getID() {
        return this->id;
    }

};


#endif //AIRLINE_CUSTOMER_H