#pragma once

#include <string>
#include<iostream>

namespace university {
using ushort = unsigned short;

class Date {
   public:
    Date() {
        day_ = 0;
        month_ = 0;
        year_ = 0;
    }

    Date(ushort day, ushort month, ushort year){
        if (!is_valid_date(day, month, year))
        {
            std::cout << "The arguments passed are not valid" << '\n';
            return;
        }
           day_ = day;
           month_ = month;
           year_ = year;
    }
    // Date(ushort day, ushort month, ushort year);
    /**
     * @brief
     *
     */
    void print_date() const;

    /**
     * @brief Get the attribute offsets object
     *
     */
    void get_attribute_offsets() const;

    // Accessors
    ushort get_day() const { return day_; }
    ushort get_month() const { return month_; }
    ushort get_year() const { return year_; }

    // Mutators
    // void set_day(ushort day) { day_ = day; }

   private:
    ushort day_;
    ushort month_;
    ushort year_ = 2024;

    bool is_valid_date(ushort day, ushort month, ushort year) const;
    ushort get_days_in_month(ushort month, ushort year) const;
    static bool is_leap_year(ushort year);

};  // class Date
}  // namespace university