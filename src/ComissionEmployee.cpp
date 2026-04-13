#include <iostream>
#include "ComissionEmployee.h"
using namespace std;

ComissionEmployee::ComissionEmployee(string name, int id, double baseSalary, double salesAmount, double commissionRate) 
    : Employee(name, id), baseSalary(baseSalary), salesAmount(salesAmount), commissionRate(commissionRate) {} // Constructor to initialize all member variables

double ComissionEmployee::calculatePay() const {
    return baseSalary + (salesAmount * commissionRate); // Pay = base salary plus commission on sales
}

void ComissionEmployee::display() const {
    Employee::display(); // Call base class display()
    cout << "Base Salary: $" << baseSalary << endl; // Display base salary
    cout << "Sales Amount: $" << salesAmount << endl; // Display sales amount   
    cout << "Commission Rate: " << commissionRate * 100 << "%" << endl; // Display commission rate as percentage
    cout << "Total Pay: $" << calculatePay() << endl; // Display total pay
}