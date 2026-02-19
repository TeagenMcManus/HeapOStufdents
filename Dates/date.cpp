#include <iostream>
#include <sstream>

//grabs the date file with the class structure in it
#include "date.h"

//Makes it so i dont have to type std:: infornt of printing functions
using namespace std;

//grabs the date
Date::Date() {
    month = 0;
    day = 0;
    year = 0;
}

//sets the format for the date
void Date::init(string dateString) {

    //Turns the string into an "input" so it can broken up
    stringstream ss(dateString);

    //Declares a temp variable
    string temp;

    //Grabs the first number in date string and sets the number into an int
    getline(ss, temp, '/');
    month = stoi(temp);

    //Grabs the second number in date string and sets the number into an int
    getline(ss, temp, '/');
    day = stoi(temp);

    //Grabs the third number in date string and sets the number into an int
    getline(ss, temp);
    year = stoi(temp);
}

//Grabs the months name
string Date::monName() {

    //Declares the array with the months names, (abbreviated out of lazyness)
    string months[] = {
        "", "Jan", "Feb", "Mar", "Apr",
        "May", "Jun", "Jul", "Aug",
        "Sep", "Oct", "Nov", "Dec"
    };

    //Checks to see which month is being called and sets it
    if (month >= 1 && month <= 12)
        return months[month];

    //If no month found then says so 
    else
        return "No Month Found";
}

//Prints the date
void Date::showDate() {
    cout << monName() << " "<< day << ", "<< year << endl;
}