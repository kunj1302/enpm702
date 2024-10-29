#pragma once
#include <iostream>

class Base {
   public:
    Base() : base_pub_{10},
             base_pro_{20},
             base_pri_{30} {
        std::cout << "Initialized all attributes for Base" << '\n';
    }
    int base_pub_;

   protected:
    int base_pro_;

   private:
    int base_pri_;
};  // class Base

class DerivedPublic : public Base {
   public:
    DerivedPublic() : derived_{1} {}
    void print_members() {
        std::cout << "Printing from DerivedPublic" << '\n';
        std::cout << base_pub_ << '\n';
        std::cout << base_pro_ << '\n';
        // std::cout << base_pri_ << '\n';
    }

   private:
    int derived_;
};  // class DerivedPublic

class DerivedProtected : protected Base {
   public:
    DerivedProtected() : derived_{2} {}
    void print_members() {
        std::cout << "Printing from DerivedProtected" << '\n';
        std::cout << base_pub_ << '\n';
        std::cout << base_pro_ << '\n';
        // std::cout << base_pri_ << '\n';
    }

   private:
    int derived_;
};  // class DerivedProtected

class DerivedPrivate : private Base {
   public:
    DerivedPrivate() : derived_{3} {}
    void print_members() {
        std::cout << "Printing from DerivedPrivate" << '\n';
        std::cout << base_pub_ << '\n';
        std::cout << base_pro_ << '\n';
        // std::cout << base_pri_ << '\n';
    }

   private:
    int derived_;
};  // class DerivedPrivate