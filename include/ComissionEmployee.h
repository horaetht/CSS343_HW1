#ifndef COMISSIONEMPLOYEE_H
#define COMISSIONEMPLOYEE_H
#include "Employee.h"
#include <string>

class ComissionEmployee : public Employee {
    private: // private members for base salary, sales amount, and commission rate
        double baseSalary;
        double salesAmount;
        double commissionRate;

    public: // public members for constructor, destructor, and overridden functions
        ComissionEmployee(std::string name, int id, double baseSalary, double salesAmount, double commissionRate);
        double calculatePay() const override;
        void display() const override;
};

#endif