//
// Created by roey on 11/22/18.
//

#include "ID.h"
#include "Reservation.h"
#include <list>

#ifndef AIRLINE_CUSTOMER_H
#define AIRLINE_CUSTOMER_H

#endif //AIRLINE_CUSTOMER_H

class Customer : public ID {
    std::string fullName;
    int priority;
    std::list<Reservation*> reservations;

public:
    Customer(std::string id, std::string name, int pri, std::list<Reservation *> res) : ID(id) {
        this->fullName = name;
        this->priority = pri;
        this->reservations = res;
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

};