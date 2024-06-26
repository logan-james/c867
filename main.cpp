#include "roster.h"
#include <iostream>

int main()
{
  std::cout << "Course Title: Scripting and Programming - Applications" << std::endl;
  std::cout << "Programming Language: C++" << std::endl;
  std::cout << "WGU Student ID: 012053764" << std::endl;
  std::cout << "Name: Logan Arguello" << std::endl;
  std::cout << std::endl;

  const std::string studentData[] = {
      "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
      "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
      "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
      "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
      "A5,Logan,Arguello,largu10@wgu.edu,29,18,20,17,SOFTWARE" // Your personal information
  };

  Roster classRoster;
  for (const auto &data : studentData)
  {
    classRoster.parse(data);
  }

  std::cout << "Displaying all students:" << std::endl;
  classRoster.printAll();
  std::cout << std::endl;

  std::cout << "Displaying invalid emails:" << std::endl;
  classRoster.printInvalidEmails();
  std::cout << std::endl;

  std::cout << "Displaying average days in course for each student:" << std::endl;
  for (const auto &data : studentData)
  {
    std::string studentID = data.substr(0, data.find(','));
    classRoster.printAverageDaysInCourse(studentID);
  }
  std::cout << std::endl;

  std::cout << "Displaying students in SOFTWARE program:" << std::endl;
  classRoster.printByDegreeProgram(DegreeProgram::SOFTWARE);
  std::cout << std::endl;

  std::cout << "Removing student A3..." << std::endl;
  classRoster.remove("A3");

  std::cout << "Roster after removing student A3:" << std::endl;
  classRoster.printAll();
  std::cout << std::endl;

  std::cout << "Attempting to remove student A3 again..." << std::endl;
  classRoster.remove("A3");

  return 0;
}