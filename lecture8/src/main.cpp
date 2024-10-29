

// //</>--- code #1
// //=====================

// #include <iostream>
// #include <stdexcept>

// int divide(int numerator, int denominator) {
//     if (denominator == 0) {
//         throw std::invalid_argument("Error: Division by zero!");
//     }
//     return numerator / denominator;
// }

// int main() {
//     try {
//         int result = divide(10, 0);  // This will throw an exception
//         std::cout << "Result: " << result << '\n';
//     } catch (const std::invalid_argument& e) {
//         std::cerr << e.what() << '\n';
//     }
// }

// //</>--- code #2
// //=====================

// #include <iostream>
// #include <stdexcept>

// void check_number(int num) {
//     if (num == 0) {
//         throw std::invalid_argument("Error: Number cannot be zero!");
//     } else if (num < 0) {
//         throw std::out_of_range("Error: Number cannot be negative!");
//     } else {
//         std::cout << "Valid number: " << num << '\n';
//     }
// }

// int main() {
//     try {
//         check_number(0);   // Throws invalid_argument
//         check_number(-5);  // Throws out_of_range
//     } catch (const std::invalid_argument& e) {
//         std::cerr << e.what() << '\n';
//     } catch (const std::out_of_range& e) {
//         std::cerr << e.what() << '\n';
//     }
// }

//</>--- code #3
//=====================
#include "driving/date.hpp"
#include "driving/engine.hpp"
#include "driving/driver.hpp"
#include "driving/vehicle.hpp"

#include <iostream>


int main(){

    try{
        driving::Date birthdate{driving::Date(28,2,2024)};
    } catch(const std::invalid_argument& e){
        std::cerr<<e.what()<<"\n";
    }
    driving::Engine engine(260);
    engine.start();

    driving::Driver alain("Alain Prost", driving::Date(1,1,1999));
    alain.drive_vehicle();

    auto hamilton = std::make_shared<driving::Driver>("Lewis Hamilton", driving::Date(2,2,2022));
    driving::Vehicle tesla("ModelS", "Red", 260);
    tesla.set_driver(hamilton);
    tesla.drive();

    // auto tesla = std::make_shared<driving::Vehicle>("ModelS", "Red", 260);
}

//</>--- code #4
//=====================
// #include "code4.hpp"

// int main(){
//     Base base;

//     DerivedPublic derived_public;
//     derived_public.print_members();

//     DerivedPublic derived_private;
//     derived_private.print_members();

//     DerivedPublic derived_protected;
//     derived_protected.print_members();
// }

// //</>--- code #5
// //=====================

// #include "code5.hpp"

// int main(){
//     Base base(10);
// }

//</>--- code #6, #7, #8, #9
//=====================

// #include "code6_7_8_9.hpp"

// int main(){
//     Derived derived(20.5);
// }

//</>--- code #10, #11
//=====================

// #include <memory>
// #include <vector>

// #include "driving/date.hpp"
// #include "driving/driver.hpp"
// #include "driving/engine.hpp"
// #include "driving/vehicle.hpp"

// // prototypes
// void drive_vehicles(const std::vector<std::shared_ptr<driving::Vehicle>> &vehicles, double distance);

// void drive_electric_vehicles(const std::vector<std::shared_ptr<driving::ElectricVehicle>> &vehicles, double distance);

// void drive_gas_vehicles(const std::vector<std::shared_ptr<driving::Vehicle>> &vehicles, double distance);

// // definitions
// void drive_vehicles(const std::vector<std::shared_ptr<driving::Vehicle>> &vehicles, double distance) {
//     for (auto &vehicle : vehicles) {
//         vehicle->drive(distance);
//     }
// }

// void drive_electric_vehicles(const std::vector<std::shared_ptr<driving::ElectricVehicle>> &vehicles, double distance) {
//     for (auto &vehicle : vehicles) {
//         vehicle->drive(distance);
//     }
// }

// void drive_gas_vehicles(const std::vector<std::shared_ptr<driving::GasolineVehicle>> &vehicles, double distance) {
//     for (auto &vehicle : vehicles) {
//         vehicle->drive(distance);
//     }
// }

// int main() {
// // ---------------------------------
// // -- Testing Date object
// // ---------------------------------
// driving::Date birthdate{driving::Date(232, 2, 2024)};

// // ---------------------------------
// // -- Testing Engine object
// // ---------------------------------
// auto engine = std::make_unique<driving::Engine>(670);
// engine->start();

// // ---------------------------------
// // -- Testing Vehicle object
// // ---------------------------------
// auto driver = std::make_shared<driving::Driver>("George", driving::Date(1, 1, 1988));
// driver->print_date_of_birth();
// driver->drive_vehicle();
// driver->print_date_of_birth();

// ---------------------------------
// -- Testing Vehicle object
// ---------------------------------
// // driver
// auto michael_schumacher = std::make_shared<driving::Driver>("Michael Schumacher", driving::Date(3, 1, 1969));
// // vehicle
// auto vehicle = std::make_shared<driving::Vehicle>("Lada Niva", "Green", 75);
// vehicle->set_driver(michael_schumacher);
// vehicle->drive(20.76);

// ---------------------------------
// -- Testing ElectricVehicle object
// ---------------------------------
// // driver
// auto lewis_hamilton = std::make_shared<driving::Driver>("Lewis Hamilton", driving::Date(7, 1, 1985));
// // vehicle
// auto tesla_model_s = std::make_shared<driving::ElectricVehicle>("Tesla Model S", "Red", 670, 20, 0.2);
// tesla_model_s->set_driver(lewis_hamilton);
// tesla_model_s->full_recharge();
// tesla_model_s->display_battery_level();
// tesla_model_s->drive(30000);

// ---------------------------------
// -- Testing GasolineVehicle object
// ---------------------------------
// // driver
// auto alain_prost = std::make_shared<driving::Driver>("Alain Prost", driving::Date(24, 2, 1955));
// // vehicle
// auto ford_mustang = std::make_shared<driving::GasolineVehicle>("Ford Mustang", "Black", 300, 60.0, 0.12);
// ford_mustang->set_driver(alain_prost);
// ford_mustang->drive(200);
// ford_mustang->refuel();

// ---------------------------------
// -- Testing runtime polymorphism
// ---------------------------------

// // Type alias
// using Gas = driving::GasolineVehicle;
// using Electric = driving::ElectricVehicle;

// // First vehicle
// auto lewis = std::make_shared<driving::Driver>("Lewis Hamilton", driving::Date(7, 1, 1985));
// auto model_s = std::make_shared<Electric>("Tesla Model S", "Red", 670, 20, 0.2);
// model_s->set_driver(lewis);

// // Second vehicle
// auto alain = std::make_shared<driving::Driver>("Alain Prost", driving::Date(24, 2, 1955));
// auto mustang = std::make_shared<Gas>("Ford Mustang", "Black", 300, 60.0, 0.12);
// mustang->set_driver(alain);

// // All vehicle types
// std::vector<std::shared_ptr<driving::Vehicle>> vehicles{model_s, mustang};
// drive_vehicles(vehicles, 35.5);

// // Electric vehicles only
// std::vector<std::shared_ptr<Electric>> electric_vehicles{model_s};
// drive_electric_vehicles(electric_vehicles, 22.5);

// // Gasoline vehicles only
// std::vector<std::shared_ptr<Gas>>
//     gasoline_vehicles{mustang};
// drive_gas_vehicles(gasoline_vehicles, 128.3);
// }


//</>--- code #12
//=====================

// #include <memory>

// #include "code12.hpp"

// int main() {
//     {
//         std::unique_ptr<Base> ptr = std::make_unique<Derived>();
//     }  // pointer goes out of scope here
// }

//</>--- code #13
//=====================

// #include "code13.hpp"
// #include<vector>

// void check(Base b) {
//     b.test();
// }

// int main() {
//     Derived derived;
//     // Base& base{derived};
//     check(derived);
// }