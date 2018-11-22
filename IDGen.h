//
// Created by roey on 11/22/18.
//

#ifndef AIRLINE_IDGEN_H
#define AIRLINE_IDGEN_H
class IDGen {
    int cuurent;
public:
    IDGen() {
        this->cuurent = 0;
    }
    int getNew(){
        this->cuurent++;
        return this->cuurent;
    }
};

#endif //AIRLINE_IDGEN_H
