#include <iostream>
using namespace std;

class Person {
 public:
  char name[64];
  int age;
  char address[64];
  int Basic_Salary, Conveyance_Allowance, HRA, Medical_Allowance, Gross_Salary,
      Net_Salary, Special_Allowance, EPF, Health_Insurance, Professional_Tax,
      Deductions;

  Person(const char name[], int age, const char address[], int Basic_Salary) {
    this->age = age;
    Conveyance_Allowance = 0.1 * Basic_Salary;
    HRA = Basic_Salary * 0.50;
    Medical_Allowance = 0.05 * Basic_Salary;
    Special_Allowance = 0.6 * Basic_Salary;
    Gross_Salary = Basic_Salary + Conveyance_Allowance + HRA +
                   Medical_Allowance + Special_Allowance;
    EPF = 0.07 * Basic_Salary;
    Health_Insurance = 0.02 * Basic_Salary;
    Professional_Tax = 0.01 * Basic_Salary;
    Deductions = EPF + Health_Insurance + Professional_Tax;
    Net_Salary = Gross_Salary - Deductions;

    cout << "**************************************" << endl;
    cout << "**************************************" << endl;
    cout << " " << endl;
    cout << "Salary Slip: " << endl;
    cout << " " << endl;
    cout << "NAME                 : " << name << endl;
    cout << "AGE                  : " << age << endl;
    cout << "ADDRESS              : " << address << endl;
    cout << "SALARY               : " << Basic_Salary << endl;
    cout << " " << endl;
    cout << " " << endl;
    cout << "'EARNINGS'" << endl;
    cout << " " << endl;
    cout << "BASIC SALARY         : " << Basic_Salary << endl;
    cout << "CONVEYANCE ALLOWANCE : " << Conveyance_Allowance << endl;
    cout << "HOUSE RENT ALLOWANCE : " << HRA << endl;
    cout << "MEDICAL ALLOWANCE    : " << Medical_Allowance << endl;
    cout << "SPECIAL ALLOWANCE    : " << Special_Allowance << endl;
    cout << "GROSS SALARY         : " << Gross_Salary << endl;
    cout << " " << endl;
    cout << " " << endl;
    cout << "'DEDUCTIONS'" << endl;
    cout << " " << endl;
    cout << "EPF                  : " << EPF << endl;
    cout << "HEALTH INSURANCE     : " << Health_Insurance << endl;
    cout << "PROFESSIONAL TAX     : " << Professional_Tax << endl;
    cout << "TOTAL DEDUCTIONS     : " << Deductions << endl;
    cout << " " << endl;
    cout << "NET SALARY           : " << Net_Salary << endl;
    cout << " " << endl;
    cout << " " << endl;
    cout << "**************************************" << endl;
    cout << "**************************************" << endl;
    cout << " " << endl;
  }
};

inline void function1(Person p1[], int min, int max) {
  min = p1[0].age;
  max = p1[0].age;
  for (int i = 0; i < 9; i++)  // to find smallest age
  {
    if (p1[i].age < min) {
      min = p1[i].age;
    }
    if (p1[i].age > max) {
      max = p1[i].age;
    }
  }
  cout << "The youngest person is " << min << " years old." << endl;
  cout << "The oldest person is " << max << " years old." << endl;
}

int main() {
  Person p[10] = {Person("Farhan", 19, "India", 100000),
                  Person("Kroos", 31, "Germany", 15000),
                  Person("Modric", 37, "Croatia", 25200),
                  Person("Benzema", 34, "France", 35200),
                  Person("Vinicius", 20, "Brazil", 45200),
                  Person("Rodrygo", 20, "Brazil", 55200),
                  Person("Carvajal", 33, "Spain", 65200),
                  Person("Thibaut", 31, "Belgium", 75200),
                  Person("Eden", 35, "Belgium", 85200),
                  Person("Mendy", 23, "France", 95200)};

  int min = 0;
  int max = 0;

  function1(p, min, max);
  return 0;
}