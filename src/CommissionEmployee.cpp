#include <iostream>
#include "CommissionEmployee.h"
using namespace std;

CommissionEmployee::CommissionEmployee(string name, int id, double baseSalary, double salesAmount, double commissionRate) 
    : Employee(name, id), baseSalary(baseSalary), salesAmount(salesAmount), commissionRate(commissionRate) {} // Constructor to initialize all member variables

double CommissionEmployee::calculatePay() const {
    return baseSalary + (salesAmount * commissionRate); // Pay = base salary plus commission on sales
}

void CommissionEmployee::display() const {
    Employee::display(); // Call base class display()
    cout << "Employee Type: Commission" << endl; // Display employee type
    cout << "Base Salary: $" << baseSalary << endl; // Display base salary
    cout << "Sales Amount: $" << salesAmount << endl; // Display sales amount   
    cout << "Commission Rate: " << commissionRate * 100 << "%" << endl; // Display commission rate as percentage
    cout << "Total Pay: $" << calculatePay() << endl; // Display total pay
}