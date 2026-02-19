//Declares the file so it doesnt run multiple times
#ifndef ADDRESS_H
#define ADDRESS_H

//Makes it so i dont have to type std:: infornt of printing functions
using namespace std;

#include <string>

class stuAddress {

    //Declares the varaibles so they can be assigned
    private: 
        string street;
        string city;
        string state;
        string zip;

    public: 
        //calls the class
        stuAddress();

        //Will set the variables once this class is called
        void init (
            string street,
            string city,
            string state,
            string zip
        );

        //Will print the address
        void showAddress();
};

#endif