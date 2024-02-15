#ifndef _INFO_H_
#define _INFO_H_

#include <iostream>

using namespace std;

typedef enum{
    user,
    good,
    order
}id_type;

void genID(std::string& dest,id_type type);
void getDate(string& dest);


#endif