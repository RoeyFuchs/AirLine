//
// Created by roey on 11/22/18.
//

#include "ID.h"
enum Classes {FIRST_CLASS, SECOND_CLASS};
#include "Customer.h"
#include "Flight.h"

#ifndef AIRLINE_RESERVATION_H
#define AIRLINE_RESERVATION_H

#endif //AIRLINE_RESERVATION_H

class Reservation : public ID {
    Customer* customer;
    Flight* flight;
    Classes classChoice;
    int maxBaggage;

    Reservation(std::string id, Customer* cus, Flight* fly, Classes choice, int max) : ID(id) {
        this->customer = cus;
        this->flight = fly;
        this->classChoice = choice;
        this->maxBaggage = max;
    }

    virtual Customer* getCustomer() {
        return this->customer;
    }
    virtual Flight* getFlight(){
        return this->flight;
    }
    virtual Classes getClass(){
        return this->classChoice;
    }
    virtual int getMaxBaggage(){
        return this->maxBaggage;
    }


};