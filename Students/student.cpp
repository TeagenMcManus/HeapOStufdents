#include <iostream>
#include <sstream>

//grabs the student file with the class structure in it
#include "student.h"

//Makes it so i dont have to type std:: infornt of printing functions
using namespace std;

//Sets the student name and cred hours
stuInfo::stuInfo() {
    firName = "";
    lasName = "";
    credHours = 0;
}

void stuInfo::init(string csvLine) {

    //turns the csv into an input
    stringstream ss(csvLine);

    //declares a temp variable
    string temp;

    //gets the first and last name
    getline(ss, firName, ',');
    getline(ss, lasName, ',');

    //grabs the address info
    string street, city, state, zip;
    getline(ss, street, ',');
    getline(ss, city, ',');
    getline(ss, state, ',');
    getline(ss, zip, ',');

    //formats the address
    address.init(street, city, state, zip);

    //gets the birth date
    getline(ss, temp, ',');

    //formats the birthdate
    birthDate.init(temp);

    //grabs the graduation date
    getline(ss, temp, ',');

    //Formats the date 
    gradDate.init(temp);

    //grabs the creddit hours
    getline(ss, temp);

    //sets the credit hours into an int
    credHours = stoi(temp);
}

void stuInfo::showStudent() {

    //Prints the name
    cout << firName << " " << lasName << endl;

    //prints the address
    address.showAddress();

    //prints
    cout << "DOB: ";
    birthDate.showDate();

    cout << "Grad Date: ";
    gradDate.showDate();

    cout << "Credits: " << credHours << endl;

    cout << "____________________________________" << endl;
}

string stuInfo::grabLasFir() {
    return lasName + ", " + firName;
}