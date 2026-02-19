#include <iostream>
#include "Dates/date.h"
#include "Addresses/address.h"
#include "Students/student.h"

void testAddress();
void testDate();
void testStudent();

int main(){
  std::cout << "Hello!" << std::endl;
  //testAddress();
  //testDate();
  testStudent();
  return 0;
} // end main


/*void testAddress(){
  stuAddress a;
  a.init("123 W Main St", "Muncie", "IN", "47303");
  a.showAddress();
} // end testAddress

void testDate(){
  Date d;
  d.init("01/27/1997");
  d.showDate();
} // end testDate

*/
void testStudent(){
  std::string studentString = "Danielle,Johnson,32181 Johnson Course Apt. 389,New Jamesside,IN,59379,02/17/2004,05/15/2027,65";
  stuInfo* student = new stuInfo();
  student->init(studentString);
  student->showStudent();
  std::cout << std::endl;
  std::cout << "Last Name, First Name" << student->grabLasFir();
  std::cout << std::endl;
  delete student;
} // end testStudent

