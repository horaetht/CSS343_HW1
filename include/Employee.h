#include <string>
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class Employee { // Abstract base class
    protected: // fields accessible to derived classes
        std::string name;
        int id;

    public: // public member functions
        Employee(std::string name, int id);
        virtual ~Employee();
        virtual double calculatePay() const = 0; // Pure virtual function
        virtual void display() const; // Virtual function


};
#endif