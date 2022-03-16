#include "Student.h"
#include <iostream>
#include <cstring>

using namespace std ;

// Assign studentId and name
void Student::assignDetails( int pstdId , char pname[]) {
  studentId = pstdId ;
  strcpy(name , pname) ;
  
}

// Display StudentId and Name
void Student::display() {
  cout << "Student ID : " << studentId <<endl ;
  cout << "Name : " << name << endl ;
}
