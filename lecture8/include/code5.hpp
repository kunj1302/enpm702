#pragma once

/**
 * @file file.hpp
 * @author your name (you@domain.com)
 * @author your name (you@domain.com)
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2024-10-21
 *
 * @copyright Copyright (c) 2024
 *
 */
#include<iostream>

class Base {
   public:
    Base(int base_value = 50) : base_{base_value} {
        std::cout << "base_att_: " << base_ << '\n';
    }

   private:
    int base_;
};  // class Base