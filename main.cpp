#include <iostream>
#include "IDGen.h"

int main() {
    IDGen io = IDGen();
    std::cout  << io.getNew() <<std::endl<< io.getNew() <<std::endl<< io.getNew() <<std::endl<< io.getNew() <<std::endl;
    return 0;
}