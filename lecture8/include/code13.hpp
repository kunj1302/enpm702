#include <iostream>

class Base {
   public:
    virtual ~Base() {
        std::cout << "Base class destructor called!\n";
    }
    virtual void test() {
        std::cout << "Base::test() called!\n";
    }

   private:
    int b_{1};
};

class Derived : public Base {
   public:
    // Destructor for the derived class
    ~Derived() {
        std::cout << "Derived class destructor called!\n";
    }
    void test() override {
        std::cout << "Derived::test() called!\n";
    }

   private:
    int d_{1};
};
