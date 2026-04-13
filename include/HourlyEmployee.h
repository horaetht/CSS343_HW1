#ifndef HOURLY_EMPLOYEE_H
#define HOURLY_EMPLOYEE_H
#include "Employee.h"
#include <string>

class HourlyEmployee : public Employee {
    private: // private members for hourly rate and hours worked
        double hourlyRate;
        double hoursWorked;

    public: // public members for constructor, destructor, and overridden functions
        HourlyEmployee(std::string name, int id, double hourlyRate, double hoursWorked);
        double calculatePay() const override;
        void display() const override;
};
#endif