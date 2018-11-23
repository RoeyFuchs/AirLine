//
// Created by roey on 11/23/18.
//

#ifndef AIRLINE_MYIMPLEMENTATION_H

#include "interface.h"
#define AIRLINE_MYIMPLEMENTATION_H

#endif //AIRLINE_MYIMPLEMENTATION_H
#include "interface.h"

class MyImplementation : public Ex2 {
public:
    virtual Employee* addEmployee(
            int seniority,
            int birth_year,
            string employer_id,
            Jobs title);

    virtual Employee* getEmployee(string id);

    virtual Plane* addPlane(
            int model_number,
            map<Jobs, int> crew_needed,
            map<Classes, int> max_passangers);

    virtual Plane* getPlane(string id);

    virtual Flight* addFlight(
            int model_number,
            Date date,
            string source,
            string destination);

    virtual Flight* getFlight(string id);

    virtual Customer* addCustomer(
            string full_name,
            int priority);

    virtual Customer* getCustomer(string id);

    virtual Reservation* addResevation(
            string customerId,
            string flightId,
            Classes cls,
            int max_baggage);

    virtual Reservation* getReservation(string id);

    virtual void exit();

};