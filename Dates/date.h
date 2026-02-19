//Declares the file so it doesnt run multiple times
#ifndef DATE_H
#define DATE_H

//Makes it so i dont have to type std:: infornt of printing functions
using namespace std;

#include <string>

class Date {

    private:

        //Declares the variables
        int month;
        int day;
        int year;

        //calls the month name function to grab the name
        string monName();

    public:
        //calls the class 
        Date();

        //calls the init function in date.cpp
        void init(string dateString);

    //will print the date
    void showDate();
};

#endif