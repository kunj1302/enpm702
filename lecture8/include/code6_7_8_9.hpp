#pragma once
#include <iostream>

class Base {
   public:
    Base(int base_value = 50) : base_{base_value} {
        std::cout << "----- Base ctor"<< '\n';
        std::cout << "base_: " << base_ << '\n';
    }

   protected:
    int base_;
};  // class Base

class Derived : public Base {
   public:
    Derived(double value)
        : derived_{value} {
        std::cout << "----- Derived ctor" << '\n';
        std::cout << "base_: " << base_ << '\n';
        std::cout << "derived_: " << derived_ << '\n';
    }

   private:
    double derived_;
};  // class Derived