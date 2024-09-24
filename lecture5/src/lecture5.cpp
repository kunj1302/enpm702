/**
 * @file lecture5.cpp
 * @author Zeid Kootbally (zeidk@umd.edu)
 * @brief Code for lecture on Functions
 * @version 0.1
 * @date 2024-09-21
 *
 * @copyright Copyright (c) 2024
 *
 */

#include <iostream>
#include <typeinfo>  // needed for typeid
#include <vector>


//</> 1
//=====================


//</> 2
//=====================

// // function declaration/prototype
// int add(int a, int b);

// // function definition/implementation
// int add(int a, int b) {
//     return a + b;
// }

// int main() {
//     std::cout << add(1, 2) << '\n';
// }

//</> 3
//=====================
// // function declarations
// void print_hello();
// void print_world();

// // function definitions
// void print_world() {
//     std::cout << "world\n";
// }

// void print_hello() {
//     std::cout << "hello, ";
//     print_world();
// }

// int main() {
//     print_hello();
//     std::cout << "exit main\n";
// }

//</> 4
//=====================
// void print_hello() {
//     std::cout << "hello, ";
//     print_world();
// }

// void print_world() {
//     std::cout << "world\n";
// }

// int main() {
//     print_hello();
//     std::cout << "exit main\n";
// }

//</> 5
//=====================
// void prompt_user() {
//     std::cout << "Enter a number: ";
//     int num{};
//     std::cin >> num;
//     print_number(num);
// }

// void print_number(int number) {
//     if (number == -1)
//         return;

//     if (number > 0)
//         std::cout << "The number is: " << number << "\n";
//     else
//         prompt_user();
// }

// int main() {
//     prompt_user();
// }

//</> 6
//=====================
// void modify(int x) {
//     // int x{a};
//     x = x + 10;  // 15
// }

// int main() {
//     int a{5};
//     modify(a);
//     std::cout << a << '\n'; // 5
// }

//</> 7
//=====================
// void modify(int &x) {
//     // Implicit int &x{a};
//     x = x + 10;  // 15
// }

// int main() {
//     int a{5};
//     modify(a);
//     std::cout << a << '\n';  // 15
// }

//</> 8
//=====================
// Write swap_values
// int main() {
//     int x{5};
//     int y{10};

//     std::cout << x << ", " << y << '\n';  // 5, 10
//     swap_values(x, y);
//     std::cout << x << ", " << y << '\n';  // 10, 5
// }

//</> 9
//=====================
// void modify(std::vector<int> &v) {  // Passed by reference
//     // Implicit std::vector<int> &v{num_vect};
//     v.push_back(6);
// }

// int main() {
//     std::vector<int> num_vect = {1, 2, 3, 4, 5};
//     modify(num_vect);
//     for (const auto &item : num_vect) {
//         std::cout << item << " ";  // 1 2 3 4 5 6
//     }
//     std::cout << '\n';
// }

//</> 10
//=====================
// void print_vector(const std::vector<int> &v) {  // Passed by const reference
//     // Implicit: const std::vector<int> &v{num_vect};
//     for (const int &item : v) {
//         std::cout << item << " ";  // 1 2 3 4 5
//     }
//     // v.push_back(100);  // This would be an error since v is const
// }

// int main() {
//     std::vector<int> num_vect = {1, 2, 3, 4, 5};
//     print_vector(num_vect);
// }

//</> 11
//=====================
// void modify(int* p) {
//     // Implicit: int* p{&a};
//     *p = *p + 10;
// }

// int main() {
//     int a{5};
//     modify(&a);
//     std::cout << a << '\n';  // 15
// }

//</> 12
//=====================
// void count_calls() {
//     // static variable
//     static int count{0};
//     count++;
//     std::cout << count << " time(s)\n";
// }

// int main() {
//     count_calls();  // 1 time(s);
//     count_calls();  // 2 time(s);
//     count_calls();  // 3 time(s);
// }

//</> 13
//=====================
// // Write the function add_to_sum here

// int main() {
//     add_to_sum(1);  // 1
//     add_to_sum(2);  // 3
//     add_to_sum(3);  // 6
//     add_to_sum(4);  // 10
// }

//</> 14
//=====================
// int add(int a, int b) {
//     int c{a + b};
//     return c;
// }

// int main() {
//     int result{add(1, 2)};
//     std::cout << result << '\n';  // 3
// }

//</> 15
//=====================
// std::vector<int> create_vector() {
//     return std::vector<int>{1, 2, 3};
// }

// int main() {
//     std::vector vect{create_vector()};
// }

//</> 16
//=====================
// std::vector<int> create_vectors() {
//     std::vector<int> vect1{1, 2, 3};
//     std::cout << "&vec1: " << &vect1 << '\n';  //@1
//     return vect1;
// }

// int main() {
//     std::vector vect{create_vectors()};
//     std::cout << "&vect: " << &vect << '\n';  //@1
// }

//</> 17
//=====================
// std::vector<int> create_vector1() {
//     std::vector<int> tmp_vect{1, 2, 3};
//     std::cout << "&tmp_vect: " << &tmp_vect << '\n';  //@1
//     return tmp_vect;
// }

// std::vector<int> create_vector2() {
//     return std::vector<int>{1, 2, 3};
// }

// int main() {
//     std::vector<int> vect1{};
//     vect1 = create_vector1();                   // No copy elision
//     std::cout << "&vect1: " << &vect1 << '\n';  //@2

//     std::vector<int> vect2{};
//     vect2 = create_vector2();  // No copy elision
// }

//</> 18
//=====================
// // Function to return a reference to the element at a given index
// int& get_element(std::vector<int>& vec, int index) {
//     return vec[index];  // Returning a reference to the element
// }

// int main() {
//     std::vector<int> my_vector = {1, 2, 3, 4, 5};

//     // Get a reference to the element at index 2
//     int& ref = get_element(my_vector, 2);

//     // Modify the element via the reference
//     ref = 10;

//     // Print the modified vector
//     for (const auto& val : my_vector) {
//         std::cout << val << " ";
//     }
//     std::cout << '\n';
// }

//</> 19
//=====================
// // Function to return a const reference to the element at a given index
// const int& get_element(std::vector<int>& vec, int index) {
//     return vec[index];  // Returning a reference to the element
// }

// int main() {
//     std::vector<int> my_vector = {1, 2, 3, 4, 5};

//     // Get a reference to the element at index 2
//     const int& ref = get_element(my_vector, 2);

//     // No intention of modifying the returned reference
//     std::cout << ref << '\n';
// }

//</> 20
//=====================
// // Function to return a reference to a static variable
// int& f() {
//     static int var{1};
//     std::cout << var << '\n';
//     return var;
// }

// // usage
// int main() {
//     f() = 5;          // 1
//     auto& ref = f();  // 5
//     ref = 10;
//     f();  // 10
// }

//</> 21
//=====================
// int& get_value() {
//     int local_value = 10;
//     return local_value;  // Dangerous
// }  // local_value goes out of scope

// int main() {
//     int& ref = get_value();
//     std::cout << ref << '\n';  // UB
// }

//</> 22
//=====================
// // Declaration
// auto add(int a, int b);

// // Definition
// auto add(int a, int b) { return a + b; }

// int main() {
//     std::cout << add(2, 3) << '\n';
// }

//</> 23
//=====================
// int f() {
//     double x = 10.5;
//     return x;  // Implicit conversion from double to int (fraction part is truncated)
// }

// double g() {
//     int x = 5;
//     return static_cast<double>(x);  // Explicitly converting int to double
// }

// int main() {
//     std::cout << typeid(f()).name() << '\n'; // int
//     std::cout << typeid(g()).name() << '\n'; // double
// }

//</> 24
//=====================
// int add(int a, int b) { return a + b; }
// double add(double a, double b) { return a + b; }
// double add(int a, double b) { return a + b; }
// double add(double a, int b) { return a + b; }
// double add(double a, double b, double c) { return a + b + c; }

// int main() {
//     std::cout << add(2, 3) << '\n';            // add(int, int)
//     std::cout << add(2, 3.5) << '\n';          // add(int, double)
//     std::cout << add(2.5, 3) << '\n';          // add(double, int)
//     std::cout << add(2.5, 3.2) << '\n';        // add(double, double)
//     std::cout << add(2.5, 3.2, 4.75) << '\n';  // add(double, double, double)
// }

//</> 25-1
//=====================
// int add(int a, int b) { return a + b; }
// int add(int a, float b) { return a + b; }

// int main() {
//     std::cout << add(2, 3) << '\n';     // add(int, int) -- exact match
//     std::cout << add(2, 3.5f) << '\n';  // add(int, float) -- exact match
// }

//</> 25-2
//=====================
// int add(int a, int b) {
//     return a + b;
// }

// int add(int a, float b) {
//     return a + b;
// }

// int add(int a, double b) {
//     return a + b;
// }

// int main() {
//     std::cout << add(2.5, 3) << '\n';      // add(double, int) -- ???
//     std::cout << add('h', false) << '\n';  // add(char, bool) -- ???
// }

//</> 26
//=====================
// double return_value(double a) {
//     return a;
// }

// int return_value(double a) {  //error: redefinition of 'return_value'
//     return a;
// }

// int main() {
//     std::cout << return_value(2) << '\n';
//     std::cout << return_value(2.5) << '\n';
// }

//</> 27
//=====================
// void add(int a, int b = 0, int c = 0) {
//     std::cout << a + b + c << '\n';
// }

// int main() {
//     add(1);        // a=1, b=0, c=0
//     add(1, 2);     // a=1, b=2, c=0
//     add(1, 2, 3);  // a=1, b=2, c=3
//     add();         // error: no matching function for call to 'add()'
// }

//</> 28
//=====================
// void add(int a, int b = 0, int c = 0);

// void add(int a, int b = 0, int c = 0) {
//     std::cout << a + b + c << '\n';
// }

// int main(){
//     add(1);
// }

//</> 29
//=====================
// int add(int a, int b) {
//     return a + b;
// }

// int add(int a, int b = 0) {  //error: redefinition of int add(int, int)
//     return a + b;
// }

// int main(){
//     add(1, 2);
// }

//</> 30
//=====================
// void f(int& x, int y, int z) {
//     x += y + z;
// }

// int g(int a, int b) {
//     int result{};
//     result = a + b;
//     f(result, a, b);
//     return result;
// }

// int main() {
//     int x{10};
//     int y{20};
//     int z{};
//     z = g(x, y);
//     std::cout << z << '\n';
// }

//</> 31
//=====================
// void add_to_reference(int& ref, int a, int b) {
//     ref = ref + a + b;  // Modify the referenced variable
// }

// int compute(int m, int n) {
//     int temp{m * n};               // Calculate a temporary value
//     add_to_reference(temp, m, n);  // Pass by reference to modify temp
//     return temp;                   // Return the modified result
// }

// int main() {
//     int p{5};
//     int q{7};
//     int result{};

//     result = compute(p, q);  // Call compute, passing values

//     std::cout << "Result: " << result << '\n';  // Output the final result
// }

//</> 32
//=====================
// long long factorial(int n) {
//     if (n <= 1) return 1;         // Base case: 0! or 1! is 1
//     return n * factorial(n - 1);  // Recursive call
// }

// int main() {
//     int n{};
//     std::cout << "Enter a number: ";
//     std::cin >> n;
//     std::cout << "Factorial of " << n << " is " << factorial(n) << '\n';
// }

//</> 33
//=====================
// int main(int argc, char *argv[]) {
//     std::cout << "Number of arguments: " << argc << '\n';
//     for (int i{0}; i < argc; i++) {
//         std::cout << "Argument " << i << ": " << argv[i] << '\n';
//     }
// }
