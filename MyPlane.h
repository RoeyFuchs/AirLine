//
// Created by roey on 11/22/18.
//

#ifndef AIRLINE_PLANE_H

#include "interface.h"
#include "IDGen.cpp"

#define AIRLINE_PLANE_H

#endif //AIRLINE_PLANE_H

class MyPlane : public Plane {
    int modelNumber;
    std::map<Jobs, int> crewNeeded;
    int maxFirstClass;
    int maxEconomyClass;
    std::string id;

public:
    MyPlane(int model, std::map<Jobs, int> crew, int maxFirst, int maxSecond){
        this->modelNumber = model;
        this->crewNeeded = crew;
        this->maxFirstClass = maxFirst;
        this->maxEconomyClass = maxSecond;
        this->id = 'P' + std::to_string(genID());

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
    virtual std::string getID() {
        return this->id;
    }
};


