#ifndef STUDENTCLASS_H
#define STUDENTCLASS_H

#include <iostream>
#include <string>
using namespace std;

class Student{
  private:
    string firstName;
    string lastName;
    int studentID;

  public:
    Student();
    Student(string _inputFirstName, string _inputLastName, int _inputID);
    void setFirstName(string _firstName);
    void setLastName(string _lastName);
    void setStudentID(int _ID);
    string getFirstName();
    string getLastName();
    int getStudentID();
};

#endif