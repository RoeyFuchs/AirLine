//
// Created by roey on 11/22/18.
//

#ifndef AIRLINE_EMPLOYEE_H

#include "interface.h"
#include "IDGen.cpp"
#define AIRLINE_EMPLOYEE_H
#define DATA_BASE_EMPLOYEE "employee.txt"

class MyEmployee : public Employee {
    int seniority;
    int birthYear;
    Employee* employer;
    Jobs title;
    std::string id;

public:
    MyEmployee(int sen, int year, Employee* empr, Jobs tit){
        this->seniority = sen;
        this->birthYear = year;
        this->employer = empr;
        this->title = tit;
        this->id = 'E' + std::to_string(genID());
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
    virtual std::string getID() {
        return this->id;
    }
    virtual void save() {
        ofstream out(DATA_BASE_EMPLOYEE, ios::app);
        out<<this->id<<","<<this->title<<","<<this->birthYear<<","<<this->seniority<<","<<this->employer->getID()<<endl;
    }
};


#endif //AIRLINE_EMPLOYEE_H
