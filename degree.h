#pragma once

enum class DegreeProgram
{
  SECURITY,
  NETWORK,
  SOFTWARE
};

// Function to convert DegreeProgram to string
inline const char *DegreeProgramToString(DegreeProgram dp)
{
  switch (dp)
  {
  case DegreeProgram::SECURITY:
    return "SECURITY";
  case DegreeProgram::NETWORK:
    return "NETWORK";
  case DegreeProgram::SOFTWARE:
    return "SOFTWARE";
  default:
    return "UNKNOWN";
  }
}