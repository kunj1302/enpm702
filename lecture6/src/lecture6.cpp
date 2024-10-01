/**
 * @file lecture6.cpp
 * @author Zeid Kootbally (zeidk@umd.edu)
 * @brief Code for lecture on Smart Pointers
 * @version 0.1
 * @date 2024-09-21
 *
 * @copyright Copyright (c) 2024
 *
 */

#include <cassert>   // Required for assert
#include <iostream>  // Required for cin, cout, etc
#include <memory>    // Required for smart pointers

void display(std::unique_ptr<int> ptr) {
    // Implicit: std::unique_ptr<int> ptr{u};
    std::cout << *ptr << '\n';
}

void reseat(std::unique_ptr<int>& p) {
    // Implicit: std::unique_ptr<int>& p{u};
    p.reset(new int(20));
}

std::unique_ptr<int> return_by_value() {
    auto p = std::make_unique<int>(10);
    std::cout << *p << '\n';  // 10
    std::cout << &p << '\n';  // @1
    return p;
}

void manage_raw_ptr(int* p) {
    if (p) {  // if p is not null
        std::cout << *p << '\n';
        delete p;  // Clean up the memory when done
    }
}

void sink_shared_ptr(std::shared_ptr<int> p) {  // Implicit: std::shared_ptr<int> p{s};
    std::cout << p.use_count() << '\n';         // 2
}

void reseat_shared_ptr(std::shared_ptr<int>& p) {  // Implicit: std::shared_ptr<int>& p{s};
    std::cout << p.use_count() << '\n';            // 1
}

std::shared_ptr<int> return_shared_ptr() {
    auto p = std::make_shared<int>(10);
    std::cout << &p << '\n';  // @1
    return p;
}

int main() {
    //</> 1
    //=====================
    // std::unique_ptr<int> u1 = std::make_unique<int>(5);
    // std::unique_ptr<int> u2{u1};  // error

    //</> 2
    //=====================
    // {
    //     // allocate resource on the heap
    //     auto u = std::make_unique<int>(10);
    //     std::cout << *u << '\n';  // 10
    //     *u = 20;                  // modify the resource
    //     std::cout << *u << '\n';  // 20
    //     std::cout << u << '\n';   // error: no operator<< that takes a unique_ptr
    // }  // u is destroyed here and resource is automatically deleted

    //</> 3-1
    //=====================
    // Allocate an int on the heap
    // auto u = std::make_unique<int>(10);
    // if (u) {  // if u_ptr is not null
    //     std::cout << "The value at " << u.get() << " is " << *u << '\n';
    // }

    //</> 3-2
    //=====================
    // // Allocate an int on the heap
    // auto u = std::make_unique<int>(10);
    // int* p{u.get()};  // get the stored pointer and store it in a variable
    // if (p) {          // if p is not null
    //     std::cout << "The value at " << p << " is " << *p << '\n';
    // }

    //</> 4
    //=====================
    // auto u = std::make_unique<int>(10);
    // auto r = u.release();
    // std::cout << *r << '\n';
    // assert(u.get() == nullptr);
    // assert(u == nullptr);
    // delete r;  // don't forget to free the memory to avoid a memory leak

    //</> 5
    //=====================
    // auto u = std::make_unique<int>(10);
    // u.release();

    //</> 6
    //=====================
    // std::unique_ptr<int> u = std::make_unique<int>(42);

    // // Transfer ownership to a raw pointer using release()
    // int* r{u.release()};

    // // At this point, u no longer owns the resource, r does
    // if (!u)
    //     std::cout << "u is now null after release().\n";

    // // Pass the raw pointer to a function for further management
    // manage_raw_ptr(r);

    //</> 7
    //=====================
    // auto u = std::make_unique<int>(10);
    // int* r{u.release()};
    // std::unique_ptr<int> u2(r);  // u2 is now managing the resource

    //</> 8
    //=====================
    // auto u_ptr = std::make_unique<int>(10);
    // u_ptr.reset();
    // assert(u_ptr.get() == nullptr);  // true

    //</> 9
    //=====================
    // auto u_ptr = std::make_unique<int>(10);
    // u_ptr.reset(new int(20));

    //</> 10
    //=====================
    // auto u1 = std::make_unique<int>(10);
    // auto u2 = std::make_unique<int>(20);
    // u1.swap(u2);

    //</> 11
    //=====================
    // auto u = std::make_unique<int>(10);
    // display(u);

    //</> 12
    //=====================
    // auto u = std::make_unique<int>(10);
    // display(std::move(u));  // Explicit move

    //</> 13
    //=====================
    // // Allocate memory for an int on the heap
    // auto u1 = std::make_unique<int>(10);
    // std::cout << "u1: " << u1.get() << '\n';  // @1

    // // Transfer ownership
    // auto u2{std::move(u1)};                   // Explicit move
    // std::cout << "u2: " << u2.get() << '\n';  // @1
    // assert(u1 == nullptr);                    // true

    // // Reuse u1 to allocate a new resource if needed
    // u1.reset(new int{20});
    // std::cout << u1.get() << '\n';  // @2

    //</> 14
    //=====================
    // std::unique_ptr<int> u = std::make_unique<int>(10);
    // std::cout << "*u: " << *u << '\n';      // 10
    // std::cout << "u: " << u.get() << '\n';  // @1
    // reseat(u);
    // std::cout << "*u: " << *u << '\n';      // 20
    // std::cout << "u: " << u.get() << '\n';  // @2

    //</> 15
    //=====================
    // auto u{return_by_value()};
    // std::cout << *u << '\n';  // 10
    // std::cout << &u << '\n';  // @1

    //</> 16
    //=====================
    // auto s1 = std::make_shared<int>(10);
    // auto s2{s1};
    // auto s3 = s2;

    //</> 17
    //=====================
    // auto s1 = std::make_shared<int>(10);
    // std::cout << s1.use_count() << '\n';

    // auto s2{s1};
    // std::cout << s1.use_count() << ' ';
    // std::cout << s2.use_count() << '\n';

    // auto s3 = s2;
    // std::cout << s1.use_count() << ' ';
    // std::cout << s2.use_count() << ' ';
    // std::cout << s3.use_count() << '\n';

    // s1.reset();
    // std::cout << s1.use_count() << ' ';
    // std::cout << s2.use_count() << ' ';
    // std::cout << s3.use_count() << '\n';

    // s1.swap(s2);
    // std::cout << s1.use_count() << ' ';
    // std::cout << s2.use_count() << ' ';
    // std::cout << s3.use_count() << '\n';

    // s2.reset(new int(20));
    // std::cout << s1.use_count() << ' ';
    // std::cout << s2.use_count() << ' ';
    // std::cout << s3.use_count() << '\n';

    //</> 18
    //=====================
    // auto s = std::make_shared<int>(10);
    // std::cout << s.use_count() << '\n';  // 1
    // sink_shared_ptr(s);
    // std::cout << s.use_count() << '\n';  // 1

    //</> 19
    //=====================
    // auto s = std::make_shared<int>(10);
    // std::cout << s.use_count() << '\n';  // 1
    // reseat_shared_ptr(s);
    // std::cout << s.use_count() << '\n';  // 1

    //</> 20
    //=====================
    // auto s{return_shared_ptr()};
    // std::cout << &s << '\n';  // @1

    //</> 21
    //=====================
    // auto s = std::make_shared<int>(10);
    // // Create a weak_ptr from a shared_ptr
    // std::weak_ptr<int> w1{s};
    // // Create a weak_ptr from another weak_ptr
    // std::weak_ptr<int> w2{w1};

    //</> 22
    //=====================
    // auto s_ptr = std::make_shared<int>(10);
    // // create a weak_ptr from a shared_ptr
    // std::weak_ptr<int> w_ptr{s_ptr};

    // std::cout << *w_ptr << '\n';       // error
    // std::cout << w_ptr.get() << '\n';  // error

    //</> 23
    //=====================
    // // Declare an empty weak pointer
    // std::weak_ptr<int> w;
    // {
    //     auto s1 = std::make_shared<int>(10);
    //     w = s1;  // w now points to the resource
    //     if (auto s2 = w.lock(); s2)
    //         std::cout << "resource is " << *s2 << "\n";
    //     else
    //         std::cout << "unable to get resource\n";
    // }  // s1 goes out of scope and the resource is deleted

    // if (auto s2 = w.lock(); s2)
    //     std::cout << "resource is =" << *s2 << "\n";
    // else
    //     std::cout << "unable to get resource\n";

    //</> 24
    //=====================
    // // Declare an empty weak pointer
    // std::weak_ptr<int> w;
    // {
    //     std::shared_ptr<int> t;
    //     auto s1 = std::make_shared<int>(10);
    //     w = s1;  // w now points to the resource
    //     if (!w.expired())
    //         std::cout << "resource is valid\n";
    //     else
    //         std::cout << "resource is expired\n";
    // }  // s1 goes out of scope and the resource is deleted

    // if (!w.expired())
    //     std::cout << "resource is valid\n";
    // else
    //     std::cout << "resource is expired\n";

    //</> 25
    //=====================
    // auto s = std::make_shared<int>(10);
    // std::weak_ptr<int> w = s;
    // s.reset();
    // w.reset();
}
