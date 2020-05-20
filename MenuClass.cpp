// Implementation of MenuClass in C++
// Ethan Burchett Summer 2020

#include "MenuClass.h"

//constructor 
MenuClass::MenuClass(std::vector<std::string> vOptions)
        : optionVector(vOptions)
{
    vectorSize = optionVector.size();   // sets vector size with .size() function
}

// Input: position of desired option in vector
// Output: std::string of menu option line
std::string MenuClass::getOptionString(int position) const
{
    return optionVector[position-1]; // returns std::string option with position starting at 1
}

// returns the size of the vector: length of the menu
int MenuClass::getSize(void)
{
    return vectorSize;
}

// formats and prints menu to terminal
void MenuClass::displayMenu(void) 
{
    std::cout<<"Please select an option"<<std::endl;

    for( int i = 1 ; i <= getSize() ; ++i) 
    {
        std::cout<< i << ". " << getOptionString(i) << std::endl; // formats and prints out each menu line
    }
}

// Gets user input as an integer
// Prompts user for integer that is valid: from 1 - size of vector
// Output: returns valid input 
void MenuClass::inputValidation(void)
{
    int input;
    bool inRange = false;
    int size = getSize();

    while (!(std::cin >> input) || !inRange)
    {
        if (input >= 1 && input <= size)
        {
            inRange = true;
            break;
        }
        //error
        std::cout << "Please enter a number from 1 - " << getSize() << std::endl;

        // clear input stream
        std::cin.clear();

        // ignore prev input

        std::cin.ignore(123, '\n'); // ignore the first 123 characters untill the enter key is pressed
    }

    validOption = input;
}

//Formats std::vector<std::string> menu option list, prints to screen, validates user input
//Output: Returns a valid menu option
int MenuClass::runMenu()
{
    //1. display menu
    displayMenu();

    //2. validate user input
    inputValidation();

    //3. return valid option

    return validOption;
}


//Formats std::vector<std::string> menu option list, prints to screen, validates user input
//Output: Pass by refrence validated user input
void MenuClass::runMenu(int & option)
{
    //1. display menu
    displayMenu();

    //2. validate user input
    inputValidation();

    //3. pass by refrence valid option

    option = validOption;
}