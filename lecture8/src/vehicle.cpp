#include "driving/vehicle.hpp"

#include <chrono>  // For std::chrono::milliseconds
#include <iostream>
#include <thread>  // For std::this_thread::sleep_for

// ===========================================
// Vehicle
// ===========================================

<<<<<<< HEAD
/* write code for drive() and set_driver()*/
void driving::Vehicle::drive() const{

    if(driver_){

        if(engine_){

            // Arrow operator (*engine_.start() equivalent)
            engine_->start();
        }
    }
    else{
        std::cout<<"There is no driver, the vehicle cannot move"<<"\n";
    }

 

};

void driving::Vehicle::set_driver(std::shared_ptr<driving::Driver> driver){
    driver_ = driver;
}

// void set_driver(std::shared_ptr<driving::Driver> driver);


=======
void driving::Vehicle::drive(double distance) {
    if(driver_){
        if (engine_) {
            engine_->start();
        }
        driver_->drive_vehicle(distance);
    } else {
        std::cout << "There is no driver, the vehicle cannot move" << '\n';
    }
}
void driving::Vehicle::set_driver(std::shared_ptr<driving::Driver> driver) {
    driver_ = driver;
}

>>>>>>> upstream/main
// // ===========================================
// // ElectricVehicle
// // ===========================================

// void driving::ElectricVehicle::display_battery_level() const {
//     std::cout << "Battery level: " << battery_level_ << "kWh\n";
// }

// // ===========================================
// void driving::ElectricVehicle::full_recharge() {
//     // Let's assume the max battery level is 100.0 kWh
//     constexpr double amount{100.0};

//     std::cout << "Starting recharge...\n";
//     std::cout << "Current battery level: " << battery_level_ << " kWh.\n";
//     // Calculate the total recharge time based on battery capacity
//     // Let's assume it takes 5 seconds for full charge:
//     // from 0.0 kWh to 100.0 kWh
//     constexpr int total_recharge_time{5};

//     double remaining_capacity = battery_capacity_ - battery_level_;
//     double charge_amount = std::min(amount, remaining_capacity);

//     // Calculate the charging time for the given amount (proportional to charge needed)
//     int charging_time = static_cast<int>((charge_amount / battery_capacity_) * total_recharge_time);
//     double charge_per_second = charge_amount / charging_time;

//     for (int i = 1; i <= charging_time; ++i) {
//         // Simulate time passing for each second of charging
//         std::this_thread::sleep_for(std::chrono::seconds(1));

//         // Increment the battery level
//         battery_level_ += charge_per_second;
//         if (battery_level_ > battery_capacity_) {
//             battery_level_ = battery_capacity_;
//         }

//         // Display progress bar
//         driving::ElectricVehicle::display_progressbar(i, charging_time);

//         // Check if battery is fully charged
//         if (battery_level_ >= battery_capacity_) {
//             std::cout << "\nBattery is fully charged.\n";
//             break;
//         }
//     }

//     std::cout << "\nRecharge complete. Current battery level: " << battery_level_ << " kWh.\n";
// }

// // ===========================================
// void driving::ElectricVehicle::display_progressbar(int current, int total) {
//     int barWidth = 50;
//     double progress = static_cast<double>(current) / total;

//     std::cout << "[";
//     int pos = barWidth * progress;
//     for (int i = 0; i < barWidth; ++i) {
//         if (i < pos)
//             std::cout << "=";
//         else if (i == pos)
//             std::cout << ">";
//         else
//             std::cout << " ";
//     }
//     std::cout << "] " << static_cast<int>(progress * 100.0) << "%\r";
//     std::cout.flush();
// }

<<<<<<< HEAD
// // ===========================================
=======
// // // ===========================================
>>>>>>> upstream/main
// // void driving::ElectricVehicle::drive(double distance) {
// //     Vehicle::drive(distance);
// //     // Assume the vehicle consumes a fixed amount of battery per mile
// //     double battery_consumed = distance * battery_consumption_rate_;

// //     // Deplete the battery capacity
// //     battery_capacity_ -= battery_consumed;

// //     // Ensure battery does not go below 0
// //     if (battery_capacity_ < 0) {
// //         battery_capacity_ = 0;
// //         std::cerr << "Battery depleted! The vehicle cannot continue.\n";
// //     } else {
// //         std::cout << "Battery remaining: " << battery_capacity_ << "%\n";
// //     }
// // }

// // ===========================================
// // GasolineVehicle
// // ===========================================

// void driving::GasolineVehicle::refuel() {
//     fuel_level_ = tank_capacity_;
//     std::cout << "The vehicle has been refueled to " << fuel_level_ << " gallons.\n";
// }

// // ===========================================
// void driving::GasolineVehicle::display_tank_level() const {
//     std::cout << "Tank level: " << fuel_level_ << " gallons\n";
// }

<<<<<<< HEAD
// // ===========================================
// // void driving::GasolineVehicle::drive(double distance) {
// //     Vehicle::drive(distance);
// //     double fuel_needed = distance * fuel_consumption_rate_;
// //     if (fuel_level_ >= fuel_needed) {
// //         fuel_level_ -= fuel_needed;
// //         std::cout << "Fuel remaining: " << fuel_level_ << " gallons.\n";
// //     } else {
// //         std::cout << "Not enough fuel to drive the full distance. The vehicle stopped after "
// //                   << (fuel_level_ / fuel_consumption_rate_) << " mi.\n";
// //         fuel_level_ = 0;
// //     }
// // }
=======
// // // ===========================================
// void driving::GasolineVehicle::drive(double distance) {
//     Vehicle::drive(distance);
//     double fuel_needed = distance * fuel_consumption_rate_;
//     if (fuel_level_ >= fuel_needed) {
//         fuel_level_ -= fuel_needed;
//         std::cout << "Fuel remaining: " << fuel_level_ << " gallons.\n";
//     } else {
//         std::cout << "Not enough fuel to drive the full distance. The vehicle stopped after "
//                   << (fuel_level_ / fuel_consumption_rate_) << " mi.\n";
//         fuel_level_ = 0;
//     }
// }
>>>>>>> upstream/main
