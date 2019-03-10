#include <iostream>
#include <fstream>
#include "person.h"
using namespace std;

void ReadData(PERSON *P, int &SIZE);
void WriteData(PERSON *P, int &SIZE);
string fName, lName;
double PayRate,HoursWorked;

void ReadData(PERSON *P,int&SIZE)
{
ifstream myFile;
myFile.is_open("input.txt");
if (myFile.is_open())
{
  cin>>fName>>lName>>PayRate>>HoursWorked;
  P[SIZE].SetFirstName(fName);
  P[SIZE].SetLastName(lName);
  P[SIZE].SetPayRate(PayRate);
  P[SIZE].SetHoursWorked(HoursWorked);
}
else
{
  cout << "Sorry, but unable to open the input.txt file " << ;
  return 0;
}

void WriteData(PERSON *P, int &SIZE)
  ofstream myFile;
  myFile.open("output.txt");

  for (int i = 0; i < SIZE; i++)
  {
    cout << P[i].FullName()<<""P[i].TotalPay()<<endl;
  }
}

int main()
{
PERSON *P = new Person[20];
int n = 0;
ReadData(p,n);
WriteData(p,n);
return 0;
}
