#include "person.h"

PERSON::PERSON(){ }

string PERSON::GetLastName()
{
  return lastname;
}

string PERSON::GetFirstName()
{
  return firstname;
}

string PERSON::FullName()
{
  return firstname + " " lastname;
}

void PERSON::SetLastName(string lName)
{
  lastname = lName;
}

void PERSON::SetPayRate(float rate)
{
  payRate = rate;
}

void PERSON::SetFirstName(string fName)
{
  firstname = fName;
}

void PERSON::SetHoursWorked(float HoursWorked)
{
  HoursWorked = hours;
}

float PERSON::GetHoursWorked()
{
  return HoursWorked;
}

float PERSON::Totalpay()
{
  return (PayRate * HoursWorked);
}

float PERSON::GetPayRate()
{
  return payRate;
}
