#include <iostream>

class DemoThis {
   private:
    int number;

   public:
    // using 'this' to differentiate attributes from parameters.
    void set_number(int number) { this->number = number; }
    int get_number() const { return this->number; }

    DemoThis& initialize(int val) {
        this->number = val;
        return *this;
    }

    void print_value() {
        std::cout << "Number: " << this->number << '\n';
    }
};