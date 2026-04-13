#include <iostream>
#include "SalariedEmployee.h"   
#include "Employee.h"
#include "HourlyEmployee.h"
#include "ComissionEmployee.h"
#include <vector>
using namespace std;

int main () {
    vector<Employee*> employees;

    // Create some employees
    employees.push_back(new SalariedEmployee("Alice", 1, 1000.0));
    employees.push_back(new HourlyEmployee("Bob", 2, 15.0, 40));
    employees.push_back(new ComissionEmployee("Charlie", 3, 500.0, 2000.0, 0.1));

    // Display employee information and calculate pay
    for (const auto& emp : employees) {
        emp->display();
        cout << "Calculated Pay: $" << emp->calculatePay() << endl;
        cout << "-----------------------------" << endl;
    }

    // Clean up memory preventing memory leaks
    for (auto& emp : employees) {
        delete emp;
    }
    
    return 0;
}