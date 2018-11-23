//
// Created by roey on 11/23/18.
//

#ifndef AIRLINE_DATABASE_H
#define AIRLINE_DATABASE_H
#define EMPLOYEE_CATEGORIES 5
#define EMPLOYEE_CHARS_MAX 7
#define EMPLOYEE_FILE_NAME "employee.txt"


#include "interface.h"

class DataBase {
    char** employee;
    char** customers;
    char** flights;
    char** planes;
    char** reservation;

    void saveEmployee();

};


#endif //AIRLINE_DATABASE_H
