#include <iostream>

class Base {
   public:
    // Non-virtual destructor (problematic in polymorphic cases)
    ~Base() {
        std::cout << "Base class destructor called!\n";
    }
};

class Derived : public Base {
   public:
    // Destructor for the derived class
    ~Derived() {
        std::cout << "Derived class destructor called!\n";
    }
};

