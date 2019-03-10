#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;
class PERSON
{
public:
  PERSON();
  void SetLastName(string lName);
  string GetLastName();
  void SetFirstName(string fName);
  string GetFirstName();
  void SetPayRate(float rate);
  float GetPayRate();
  void SetHoursWorked(float hours);
  float GetHoursWorked();
  float TotalPay();
  string FullName();
};
private:
  string lastname;
  string firstname;
  float payRate;
  float HoursWorked;
#endif
