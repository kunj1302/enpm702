#include "driving/driver.hpp"

#include <iostream>

<<<<<<< HEAD
void driving::Driver::drive_vehicle() const {
    std::cout << "Driver (" << name_ << ") is driving\n";
=======
void driving::Driver::drive_vehicle(double distance) const {
    std::cout << "Driver (" << name_ << ") is driving a distance of " << distance << '\n';
>>>>>>> upstream/main
}