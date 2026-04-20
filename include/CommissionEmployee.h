#ifndef COMMISSIONEMPLOYEE_H
#define COMMISSIONEMPLOYEE_H
#include "Employee.h"
#include <string>

class CommissionEmployee : public Employee {
    private: // private members for base salary, sales amount, and commission rate
        double baseSalary;
        double salesAmount;
        double commissionRate;

    public: // public members for constructor, destructor, and overridden functions
        CommissionEmployee(std::string name, int id, double baseSalary, double salesAmount, double commissionRate);
        double calculatePay() const override;
        void display() const override;
};

#endif