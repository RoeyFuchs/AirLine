//
// Created by roey on 11/22/18.
//

#include "Date.h"

bool Date::operator<(const Date& d) const {
    if(!(*this > d) && !(*this == d)) {
        return true;
    }
    return false;
}
bool Date::operator>(const Date& d) const {
    //initilize the  value of this day,month, year and the other day,month,year
    int tD = std::stoi(this->date.substr(8,9));
    int tM = std::stoi(this->date.substr(5,6));
    int tY = std::stoi(this->date.substr(0,3));
    int oD = std::stoi(d.date.substr(8,9));
    int oM = std::stoi(d.date.substr(5,6));
    int oY = std::stoi(d.date.substr(0,3));
    if (tY > oY) {
        return true;
    }
    if (tY < oY) {
        return false;
    }
    if (tM > oM) {
        return true;
    }
    if (tM < oM) {
        return false;
    }
    if (tD > oD) {
        return true;
    }
        return false;

}
bool Date::operator==(const Date& d) const {
    if(this->date == d.date) {
        return true;
    }
    return false;
}
