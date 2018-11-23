//
// Created by roey on 11/22/18.
//


#include "interface.h"
#include "IDGen.cpp"

#ifndef AIRLINE_FLIGHT_H
#define AIRLINE_FLIGHT_H

#endif //AIRLINE_FLIGHT_H

class MyFlight : public Flight {
    int modeNumber;
    std::list<Reservation*> reservations;
    std::list<Employee*> assignedCrew;
    Date date;
    std::string source;
    std::string destination;
    std::string id;

public:
    MyFlight(std::list<Reservation*>rev, std::list<Employee*> crew,
            Date dateVal, std::string src, std::string des) : date(dateVal){
    this->reservations = rev;
    this->assignedCrew = crew;
    this->date = dateVal;
    this->source = src;
    this->destination = des;
        this->id = 'F' + std::to_string(genID());
}
    virtual int getModelNumber() {
        return this->modeNumber;
    }
    virtual std::list<Reservation*> getReservations(){
        return this->reservations;
    }
    virtual std::list<Employee*> getAssignedCrew(){
        return this->assignedCrew;
    }
    virtual Date getDate(){
        return this->date;
    }
    virtual std::string getSource(){
        return this->source
    }
    virtual std::string getDestination(){
        return this->destination;
    }
    virtual std::string getID() {
        return this->id;
    }


};
