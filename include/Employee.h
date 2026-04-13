#include <string>
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class Employee {
    protected:
        std::string name;
        int id;

    public:
        Employee(std::string name, int id);
        virtual ~Employee();
        virtual double calculatePay() const = 0; // Pure virtual function
        virtual void display() const; // Virtual function


};
#endif