//
// Created by roey on 11/22/18.
//

#ifndef AIRLINE_PLANE_H

#include <map>
#include "ID.h"
#include "Employee.h"

#define AIRLINE_PLANE_H

#endif //AIRLINE_PLANE_H

class Plane : public ID {
    int modelNumber;
    std::map<Jobs, int> crewNeeded;
    int maxFirstClass;
    int maxEconomyClass;

public:
    Plane(std::string id, int model, std::map<Jobs, int> crew, int maxFirst, int maxSecond) : ID(id) {
        this->modelNumber = model;
        this->crewNeeded = crew;
        this->maxFirstClass = maxFirst;
        this->maxEconomyClass = maxSecond;

    }
    virtual int getModelNumber(){
        return this->modelNumber;
    }
    virtual std::map<Jobs, int> getCrewNeeded(){
        return this->crewNeeded;
    };
    virtual int getMaxFirstClass(){
        return this->maxFirstClass;
    };
    virtual int getMaxEconomyClass(){
        return this->maxEconomyClass;
    };
};


