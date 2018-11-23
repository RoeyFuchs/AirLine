//
// Created by roey on 11/23/18.
//

#include "MyImplementation.h"
#include "MyCustomer.h"
#include "MyEmployee.h"
#include "MyFlight.h"
#include "MyPlane.h"
#include "MyReservation.h"

Employee* MyImplementation::addEmployee(
        int seniority,
        int birth_year,
        string employer_id,
        Jobs title) {
    MyEmployee A(seniority, birth_year,this->getEmployee(employer_id), title);
    A.save();
    return A;

}

Employee* getEmployee(string id);

Plane* addPlane(
        int model_number,
        map<Jobs, int> crew_needed,
        map<Classes, int> max_passangers);

Plane* getPlane(string id);

Flight* addFlight(
        int model_number,
        Date date,
        string source,
        string destination);

Flight* getFlight(string id);

Customer* addCustomer(
        string full_name,
        int priority);

Customer* getCustomer(string id);

Reservation* addResevation(
        string customerId,
        string flightId,
        Classes cls,
        int max_baggage);

Reservation* getReservation(string id);

void exit();