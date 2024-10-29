#pragma once

#include <iostream>
#include <string>
<<<<<<< HEAD

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
=======
#include <memory>
#include "date.hpp"

namespace driving {
class Date;
class Vehicle;

class Driver {
   public:
    Driver(const std::string& name, driving::Date dob) : name_{name}, date_of_brith_{dob} {
        /*body*/
    }
    void drive_vehicle(double distance) const;

    driving::Date get_birthdate() const {
        return date_of_brith_;
    }

    std::string get_name() const {
        return name_;
    }
    
   private:
    std::string name_;
    driving::Date date_of_brith_;
>>>>>>> upstream/main
};  // class Driver
}  // namespace driving
