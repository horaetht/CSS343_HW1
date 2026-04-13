#ifndef SALARIEDEMPLOYEE_H
#define SALARIEDEMPLOYEE_H
#include "Employee.h"
#include <string>

class SalariedEmployee : public Employee {
    private: // private member for weekly salary
        double weeklySalary;

    public:
        SalariedEmployee(std::string name, int id, double weeklySalary);
        double calculatePay() const override;
        void display() const override;
};

#endif