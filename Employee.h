//
// Created by roey on 11/22/18.
//

#ifndef AIRLINE_EMPLOYEE_H

#include "ID.h"
#define AIRLINE_EMPLOYEE_H

enum Jobs {MANAGER, NAVIGATOR, FLY_ATTENDANT, PILOT, OTHER};
class Employee : public ID {
    int seniority;
    int birthYear;
    Employee* employer;
    Jobs title;

public:
    Employee(std::string id, int sen, int year, Employee* empr, Jobs tit) : ID(id) {
        this->seniority = sen;
        this->birthYear = year;
        this->employer = empr;
        this->title = tit;
    }
    virtual int getSeniority() {
        return this->seniority;
    }
    virtual int getBirthYear(){
        return this->birthYear;
    }
    virtual Employee* getEmployer(){
        return this->employer;
    }
    virtual Jobs getTitle() {
        return this->title;
    }
};


#endif //AIRLINE_EMPLOYEE_H
