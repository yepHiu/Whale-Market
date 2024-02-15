#include "tools/info.h"
#include <cstdio>
#include <iostream>
#include <tools/colors.h>
#include <tools/hints.h>
#include <tools/info.h>


int main(void)
{
    welcomeMessage();
    string id;
    string date;
    genID(id,user);
    genID(id,good);
    genID(id,order);
    getDate(date);
    cout<<date<<endl;
    return 0;
}