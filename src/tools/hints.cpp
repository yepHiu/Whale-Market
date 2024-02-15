#include "tools/colors.h"
#include <iostream>
#include <tools/hints.h>

using namespace std;

void welcomeMessage(void)
{   
    std::cout<<BOLD<<FRONT_BLUE;
    std::cout<<" _       ____          __           __  ___           __        __ "<<std::endl;
    std::cout<<"| |     / / /_  ____ _/ /__        /  |/  /___ ______/ /_____  / /_"<<std::endl;
    std::cout<<"| | /| / / __ \\/ __ `/ / _ \\______/ /|_/ / __ `/ ___/ //_/ _ \\/ __/"<<std::endl;
    std::cout<<"| |/ |/ / / / / /_/ / /  __/_____/ /  / / /_/ / /  / ,< /  __/ /_" <<std::endl;
    std::cout<<"|__/|__/_/ /_/\\__,_/_/\\___/     /_/  /_/\\__,_/_/  /_/|_|\\___/\\__/" <<std::endl;                                                              
    std::cout<<RESET;
}
void successMessage(const char* ch){
    std::cout<<BOLD<<FRONT_GREEN<<ch<<RESET<<endl;
}
void failMessage(const char* ch){
    std::cout<<BOLD<<FRONT_RED<<ch<<RESET<<endl;
}
void illegalMessage(const char* ch){
    std::cout<<BOLD<<FRONT_RED<<ch<<RESET<<endl;
}
void loadingMessage(const char* ch){
    std::cout<<BOLD<<BACK_WHITE<<ch<<RESET<<endl;
}
void exitMessage(const char* ch){
    std::cout<<FRONT_RED<<ch<<RESET<<endl;
}
void invildMessage(const char* ch){
    std::cout<<BOLD<<UNDERLINE<<ch<<RESET<<endl;
}

