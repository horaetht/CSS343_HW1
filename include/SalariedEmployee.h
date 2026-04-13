#ifndef SALARIEDEMPLOYEE_H
#define SALARIEDEMPLOYEE_H
#include "Employee.h"
#include <string>

class SalariedEmployee : public Employee {
    private:
        double weeklySalary;

    public:
        SalariedEmployee(std::string name, int id, double weeklySalary);
        virtual ~SalariedEmployee();
        virtual double calculatePay() const override;
        virtual void display() const override;
};

#endif