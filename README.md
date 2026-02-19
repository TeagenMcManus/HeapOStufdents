# HeapOStufdents
Make a piece of code that will grab a students info and print it out using class structure for each part. IE: Address, Date, and Student Info

#include student.h
#include address.h
#include date.h

int main {
    studentInfo()
    studentAdd()
    studentDate()

}

void studentInfo {
    std::string studentString = "Danielle,Johnson,32181 Johnson Course Apt. 389,New Jamesside,IN,59379,02/17/2004,05/15/2027,65";
    Student* student = new Student();
    student->init(studentString);
    student->printStudent();
    std::cout << std::endl;
    std::cout << student->getLastFirst();
    delete student;
}

void studentAdd {
    stuAddress a;
    a.init("123 W Main St", "Muncie", "IN", "47303");
    a.showAddress();
}

void studentDate {
    stuGrad Grd
    stuDOB DOB
    grad.init("05/01/2028)
    DOB.init(03/06/2005)
}