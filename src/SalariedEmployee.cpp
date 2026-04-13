#include "SalariedEmployee.h"   
#include <iostream>
using namespace std;

SalariedEmployee::SalariedEmployee(string name, int id, double weeklySalary) 
    : Employee(name, id ), weeklySalary(weeklySalary) {}

SalariedEmployee::~SalariedEmployee() {}

double SalariedEmployee::calculatePay() const {
    return weeklySalary; // For salaried employees, pay is just the weekly salary
}

void SalariedEmployee::display() const {
    Employee::display(); // Call base class display to show name and id
    cout << "Weekly Salary: $" << weeklySalary << endl;
}