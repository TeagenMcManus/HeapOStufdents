#include <iostream>

//grabs the address file with the class structure in it
#include "address.h"

//Makes it so i dont have to do std
using namespace std;

//Sets the variables to what is declared, can be changed to grab from a file
stuAddress::stuAddress() {
    street = "";
    city = "";
    state = "";
    zip = "";
}

//Grabs the vairables
void stuAddress::init(
    string street,
    string city,
    string state,
    string zip
)

//Tells what variable links to what
    {
    this->street = street;
    this->city = city;
    this->state = state;
    this->zip = zip;
}

//Prints the address
void stuAddress::showAddress() {
    cout << street << endl;
    cout << city << " " << state << ", " << zip << endl;
}
