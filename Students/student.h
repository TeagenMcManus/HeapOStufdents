//Declares the file so it doesnt run multiple times
#ifndef STUDENT_H
#define STUDENT_H

//Makes it so i dont have to type std:: infornt of printing functions
using namespace std;

#include <string>

//Adds the dates and addresses files
#include "../Dates/date.h"
#include "../Addresses/address.h"

//Makes it so i dont have to type std:: infornt of printing functions
using namespace std;

class stuInfo {
    private:

        //Declares the credit hours variable
        int credHours;

        //Declares the first and last name variable
        string firName;
        string lasName;

        //Sets the students address
        stuAddress address;

        //Sets the birthdate and graduation date
        Date birthDate;
        Date gradDate;


    public:

        //Calls the class
        stuInfo();

        //initializes using the csv file
        void init(string csvLine);

        //Prints the student info
        void showStudent();

        //Grabs the last name and first
        string grabLasFir();     
};

#endif