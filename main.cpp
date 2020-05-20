#include "MenuClass.h"

int main()
{
    
    std::vector<std::string> options;
    options.push_back("play game");
    options.push_back("load game");
    options.push_back("exit");
    options.push_back("ding dong");

    MenuClass menu(options);
  
    int option = menu.runMenu();

    int option2; 
    menu.runMenu(option2);

    std::cout<<"Your option -> "<<option<<std::endl;

    std::cout<<"Your option2 -> "<<option2<<std::endl;



}