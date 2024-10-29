#pragma once

#include <iostream>
#include <string>

#include "date.hpp"

namespace driving {
//Class forwarding (for dealing with compile order mess up)
class Date;

class Driver {

    public:
    Driver(const std::string &name, driving::Date dob): 
    name_{name}, date_of_birth_{dob}{
    }

    void drive_vehicle() const;

    driving::Date get_birthdate () const {
        return date_of_birth_;
    }

    std::string get_name () const {
        return name_;
    }
    

    private:
    std::string name_;
    driving::Date date_of_birth_;
};  // class Driver
}  // namespace driving
