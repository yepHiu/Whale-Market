#include <cstdio>
#include <iostream>
#include <tools/colors.h>
#include <tools/hints.h>


int main(void)
{
    welcomeMessage();
    successMessage("SUCCESS!");
    failMessage("FAIL!");
    loadingMessage("LOADING...");
    invildMessage("ILLEGAL INPUT!");
    exitMessage("EXITING...");
    return 0;
}