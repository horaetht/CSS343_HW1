#include <iostream>
#include "HourlyEmployee.h"
#include <string>
using namespace std;

HourlyEmployee::HourlyEmployee(string name, int id, double hourlyRate, double hoursWorked) 
    : Employee(name, id), hourlyRate(hourlyRate), hoursWorked(hoursWorked) {} // Constructor to initialize all member variables


double HourlyEmployee::calculatePay() const {
    return hourlyRate * hoursWorked; // Pay is hourly rate times hours worked
}

void HourlyEmployee::display() const {
    Employee::display(); // just inherit name and id from base class
    cout << "Employee Type: Hourly" << endl; // Display employee type
    cout << "Hourly Rate: $" << hourlyRate << endl; // Display hourly rate
    cout << "Hours Worked: " << hoursWorked << endl; // Display hourly rate and hours worked
    cout << "Total Pay: $" << calculatePay() << endl; // Display total pay
}