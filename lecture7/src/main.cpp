

//</> Example #2
//=====================
// #include <iostream>
// #include "example2.hpp"
// #include "example2.hpp"

// extern int x;

// int main() {
//     std::cout << x << '\n';
// }

//</> Example #7
//=====================
// #include <iostream>
// #include "example7.hpp"

// int main(){
//     B b;
// }

//</> Example #8
//=====================
// #include <iostream>

// #include "example8.hpp"

// int main() {
//     int some_value{43};
//     DemoConstAndRef demo(10, some_value);
// }

//</> Example #12
//=====================

// #include <iostream>

// #include "lecture12.hpp"
// int DemoStaticAttribute::count = 0;  // initialization of class attribute

// int main() {
//     DemoStaticAttribute demo1;                                    // default ctor called
//     std::cout << "Initial count: " << demo1.get_count() << '\n';  // 1
//     DemoStaticAttribute demo2;
//     std::cout << "After creating two objects: " << demo2.get_count() << '\n';  // 2
//     DemoStaticAttribute demo3;
//     std::cout << "After creating three objects: " << demo3.get_count() << '\n';  // 3
// }

//</> Example #13
//=====================
// #include <iostream>

// #include "lecture13.hpp"

// int DemoStaticMethod::count = 0;  // initialize class attribute

// int main() {
//     std::cout << "Initial count: " << DemoStaticMethod::get_count() << '\n';

//     DemoStaticMethod d1, d2, d3;
//     std::cout << "After creating 3 objects: " << DemoStaticMethod::get_count() << '\n';
// }