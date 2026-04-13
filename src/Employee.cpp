#include "Employee.h"
#include <iostream>
using namespace std;

Employee::Employee(string name, int id) : name(name), id(id) {} // Constructor to initialize name and id

Employee::~Employee() {} // Base class destructor

// double Employee::calculatePay() const {
//     return 0.0; // Base class does not calculate pay
// } // pure vitual function, no implementation needed

void Employee::display() const { // Base class display function to show name and id
    cout << "Employee Name: " << name << endl;
    cout << "Employee ID: " << id << endl;
}