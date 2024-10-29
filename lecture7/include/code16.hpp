#include <iostream>

class Car {
   public:
    // Sports car
    static Car create_sports_car() {
        Car car;             // Compiler-provided default ctor
        car.set_speed(200);
        return car;
    }
    // Regular car
    static Car create_regular_car() {
        Car car;             // Compiler-provided default ctor
        car.set_speed(100);  
        return car;
    }

    
    void drive() {
        std::cout << "Vroom vroom at " << speed_ << " mph\n";
    }

   private:
    int speed_;
    void set_speed(int speed) { this->speed_ = speed; }
};