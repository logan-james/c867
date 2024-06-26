#pragma once
#include <string>
#include "degree.h"

class Student
{
private:
  std::string studentID;
  std::string firstName;
  std::string lastName;
  std::string emailAddress;
  int age;
  int daysInCourse[3];
  DegreeProgram degreeProgram;

public:
  Student(std::string studID, std::string fName, std::string lName, std::string email, int a, int days[], DegreeProgram degree);

  // Getters
  std::string getStudentID() const;
  std::string getFirstName() const;
  std::string getLastName() const;
  std::string getEmailAddress() const;
  int getAge() const;
  const int *getDaysInCourse() const;
  DegreeProgram getDegreeProgram() const;

  // Setters
  void setStudentID(std::string studID);
  void setFirstName(std::string fName);
  void setLastName(std::string lName);
  void setEmailAddress(std::string email);
  void setAge(int a);
  void setDaysInCourse(int days[]);
  void setDegreeProgram(DegreeProgram degree);

  void print() const;

  ~Student() = default;
};