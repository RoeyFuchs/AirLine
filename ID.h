//
// Created by roey on 11/22/18.
//

#ifndef AIRLINE_ID_H
#define AIRLINE_ID_H


#include <string>

class ID {
    std::string id;
public:
     ID(std::string a) {
         this->id = a;
     }
     std::string getID() {
         return this->id;
     }

};


#endif //AIRLINE_ID_H
