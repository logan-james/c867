#include "student.h"
#include <iostream>

Student::Student(std::string studID, std::string fName, std::string lName, std::string email, int a, int days[], DegreeProgram degree)
    : studentID(studID), firstName(fName), lastName(lName), emailAddress(email), age(a), degreeProgram(degree)
{
  for (int i = 0; i < 3; ++i)
  {
    daysInCourse[i] = days[i];
  }
}

std::string Student::getStudentID() const { return studentID; }
std::string Student::getFirstName() const { return firstName; }
std::string Student::getLastName() const { return lastName; }
std::string Student::getEmailAddress() const { return emailAddress; }
int Student::getAge() const { return age; }
const int *Student::getDaysInCourse() const { return daysInCourse; }
DegreeProgram Student::getDegreeProgram() const { return degreeProgram; }

void Student::setStudentID(std::string studID) { studentID = studID; }
void Student::setFirstName(std::string fName) { firstName = fName; }
void Student::setLastName(std::string lName) { lastName = lName; }
void Student::setEmailAddress(std::string email) { emailAddress = email; }
void Student::setAge(int a) { age = a; }
void Student::setDaysInCourse(int days[])
{
  for (int i = 0; i < 3; ++i)
  {
    daysInCourse[i] = days[i];
  }
}
void Student::setDegreeProgram(DegreeProgram degree) { degreeProgram = degree; }

void Student::print() const
{
  std::cout << studentID << "\tFirst Name: " << firstName << "\tLast Name: " << lastName
            << "\tAge: " << age << "\tdaysInCourse: {" << daysInCourse[0] << ", "
            << daysInCourse[1] << ", " << daysInCourse[2] << "} Degree Program: "
            << DegreeProgramToString(degreeProgram) << std::endl;
}