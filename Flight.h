//
// Created by roey on 11/22/18.
//

#include "ID.h"
#include "Employee.h"
#include <list>

#ifndef AIRLINE_FLIGHT_H
#define AIRLINE_FLIGHT_H

#endif //AIRLINE_FLIGHT_H

class Flight : public ID {
    int modeNumber;
    std::list<Reservation*> reservations;
    std::list<Employee*> assignedCrew;
    Date date;
    std::string source;
    std::string destination;
public:
    Flight(std::string id, std::list<Reservation*>rev, std::list<Employee*> crew,
            Date dateVal, std::string src, std::string des) : ID(id) {
    this->reservations = rev;
    this->assignedCrew = crew;
    this->date = dateVal;
    this->source = src;
    this->destination = des;
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


};
