#include<iostream>

class MyClass {
   public:
    // Constructor
    MyClass() {
        std::cout << "Object created!\n";
    }

    // Destructor
    ~MyClass() {
        std::cout << "Object destroyed!\n";
    }
};