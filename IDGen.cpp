//
// Created by roey on 11/23/18.
//
#define ID_GEN_FILE "idGen.txt"

#include <fstream>


static void inc(int i) {
    std::ofstream file;
    file.open(ID_GEN_FILE);
    i++;
    file << i;
    file.close();
}
/** this function return a number, that stored in a file and incrce it in one.
 that let a just one source of ID's*/
static int genID() {
    int i;
    std::ifstream file;
    file.open(ID_GEN_FILE);
    file >> i;
    file.close();
    inc(i);
    return i;
}