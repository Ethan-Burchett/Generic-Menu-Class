// Generic menu class
// Input: std::string vector of options
// Output: valid option integer
// Prints formatted options to the terminal with option numbers
// User input data validation with helper error messages
// can be used with any size of std::string option array

// Function Prototype of MenuClass
// Ethan Burchett Summer 2020

#include <iostream>
#include <string>
#include <vector>

    //How to format menu vector input:
    //std::vector<std::string> options;
    //options.push_back("play game");
    //options.push_back("load game");


// class prototype

// when constructing, you must include a std::vector<std::string> of options

// Generic menu class : use runMenu() 
// Access individual menu lines with : getOptionString()
// Input: std::string vector of options
// Output: valid option integer
class MenuClass
{
    private:
        std::vector<std::string> optionVector;// vector of std::string options eg: "play game","exit","load"...
       
        int vectorSize;                       // number of menu items

        int validOption;                      // option to be returned
    
        int getSize(void);                    // returns the size of the vector

        void displayMenu(void);               // displays the menu 

        void inputValidation(void);           // validates user input from 1 - size of vector

    public:

        explicit MenuClass(std::vector<std::string> vOptions);  // uses a std::vector<std::string> when constucting and uses a member initalizer list

        int runMenu(void);                    // primary client interface for MenuClass returns value

        void runMenu(int & option);            // primary client interface for MenuClass return by refrence

        std::string getOptionString(int position) const;        // returns single line of option vector

};