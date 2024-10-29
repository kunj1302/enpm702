#include "driving/driver.hpp"

#include <iostream>

void driving::Driver::drive_vehicle() const {
    std::cout << "Driver (" << name_ << ") is driving\n";
}