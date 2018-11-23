//
// Created by roey on 11/23/18.
//

#ifndef AIRLINE_RESERVATION_H

#include "IDGen.cpp"

#include "interface.h"
#define AIRLINE_RESERVATION_H

class MyReservation : public Reservation {
    Customer* customer;
    Flight* flight;
    Classes classChoice;
    int maxBaggage;
    std::string id;

    MyReservation(Customer* cus, Flight* fly, Classes choice, int max){
        this->customer = cus;
        this->flight = fly;
        this->classChoice = choice;
        this->maxBaggage = max;
        this->id = 'R' + std::to_string(genID());
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

    virtual std::string getID() {
        return this->id;
    }


};

#endif //AIRLINE_RESERVATION_H
