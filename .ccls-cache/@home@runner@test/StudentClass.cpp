#include <iostream>
using namespace std;

#include "StudentClass.h"

Student::Student(){
  firstName = "";
  lastName = "";
  studentID = 0;
}

Student::Student(string inputFirstName, string inputLastName, int inputID){
  firstName = inputFirstName;
  lastName = inputLastName;
  studentID = inputID;
}
//getters
string Student::getFirstName(){
  return firstName;
}

string Student::getLastName(){
  return lastName;
}

int Student::getStudentID(){
  return studentID;
}
//setters
void Student::setFirstName(string _firstName){
  firstName = _firstName;
}

void Student::setLastName(string _lastName){
  lastName = _lastName;
}

void Student::setStudentID(int _ID){
  studentID = _ID;
}

