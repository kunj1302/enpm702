

//</>--- code #1
//=====================

// #include <iostream>
// #include <memory>

// #include "date.hpp"

// int main() {
//     university::Date date;
//     std::cout << sizeof date << '\n';
//     date.get_attribute_offsets();

//     auto u_date = std::make_unique<university::Date>();
//     std::cout << sizeof u_date << '\n';
//     std::cout << sizeof *u_date << '\n';
// }

// //</>--- code #2
// //=====================

// #include <iostream>
// #include <memory>

// #include "date.hpp"

// int main() {
//     university::Date date;
//     date.get_attribute_offsets();
// }

//</>--- code #3
//=====================

// #include <iostream>
// #include <memory>

// #include "date.hpp"

// int main() {
//     university::Date date;
//     date.print_date();
// }

//</>--- code #4
//=====================

// #include <iostream>
// #include <memory>

// #include "date.hpp"

// int main() {
//     // const university::Date date1;            // date1 is const
//     // std::cout << date1.get_day() << '\n';    // OK: get_day() is const
//     // std::cout << date1.get_month() << '\n';  // compilation error

//     university::Date date2;                  // date2 is non-const
//     std::cout << date2.get_day() << '\n';    // OK: get_day() is const
//     std::cout << date2.get_month() << '\n';  // OK: get_month() is non-const
// }

//</>--- code #5
//=====================

// #include <iostream>
// #include <memory>

// #include "date.hpp"

// int main() {
//     university::Date date;
//     std::cout << date.get_day() << '\n';  // 15

//     auto u_date = std::make_unique<university::Date>();
//     std::cout << u_date->get_day() << '\n';  // 15
// }

//</>--- code #6
//=====================

// #include <iostream>
// #include <memory>

// #include "date.hpp"

// int main() {
//     // parameterized ctor
//     university::Date date{22, 2, 2023};
//     date.print_date();

//     date.get_test();
// }

//</> code #7
//=====================
// #include "code7.hpp"

// int main(){
//     B b;
// }

// //</> code #8
// //=====================
// #include <iostream>

// #include "code8.hpp"

// int main() {
//     int some_value{43};
//     DemoConstAndRef demo(10, some_value);
// }

// //</> code #9
// //=====================
// #include "code9.hpp"

// int main() {
//     DemoThis demo_this;
//     demo_this.initialize(5).print_value();  // chaining function calls
// }

// //</> code #10, #11, #12, #13, #14
// //=====================
// #include "code10.hpp"
// #include<iostream>

// int MyClass::count = 0;

// int main() {
//     std::cout << MyClass::count << '\n';
// }

// //</> code #15
// //=====================
// #include "code15.hpp"

// int main() {
//     int result{MathUtils::add(3, 4)};  // No need to create a MathUtils object
// }

// //</> code #16
// //=====================
// #include "code16.hpp"

// int main() {
//     auto regular_car = Car::create_regular_car();
//     regular_car.drive();
//     auto sports_car = Car::create_sports_car();
//     sports_car.drive();
// }

//</> code #17
// //=====================
// #include "code17.hpp"
// #include<iostream>

// // Definition of static attribute
// int Counter::count = 0;
// int main() {
//     // Increment the counter
//     Counter::increment();
//     Counter::increment();

//     // Print the current count
//     std::cout << "Current count: " << Counter::get_count() << '\n';

//     // Increment the counter again
//     Counter::increment();

//     // Print the updated count
//     std::cout << "Updated count: " << Counter::get_count() << '\n';
// }

//</> code #18
// //=====================
// #include <iostream>

// #include "code18.hpp"

// int main() {
//     {
//         std::cout << "--- First object" << '\n';
//         MyClass* my_class_ptr{new MyClass()};  // Object created!
//         delete my_class_ptr;                   // Object destroyed!
//         std::cout << "--- Second object" << '\n';
//         MyClass my_class;  // Object created!
//     }  // Object destroyed!
// }

//</>--- code #19
//=====================
// #include <iostream>
// #include "code19.hpp"

// void test(Temperature celcius) {
//     std::cout << celcius.get_celsius() << '\n';
// }

// int main() {
//     test(36.5);
// }

//</>--- code #20
//=====================
// #include <iostream>
// #include "code20.hpp"


// void test(Unit unit) {
//     unit.print_units();
// }

// int main() {
//     test(3.5);
// }
