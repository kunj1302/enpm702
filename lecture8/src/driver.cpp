#include "driving/driver.hpp"

#include <iostream>

void driving::Driver::drive_vehicle(double distance) const {
    std::cout << "Driver (" << name_ << ") is driving a distance of " << distance << '\n';
}