#include "date.hpp"

#include <iostream>
#include <cstddef>

void university::Date::print_date() const {
    std::cout << month_ << "/" << day_ << "/" << year_ << '\n';
}

bool university::Date::is_leap_year(ushort year) {
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            return year % 400 == 0;  // Divisible by 400 -> leap year
        }
        return true;  // Divisible by 4 but not 100 -> leap year
    }
    return false;  // Not divisible by 4 -> not a leap year
}

ushort university::Date::get_days_in_month(ushort month, ushort year) const {
    switch (month) {
        case 2:
            return Date::is_leap_year(year) ? 29 : 28;  // February
        case 4:
        case 6:
        case 9:
        case 11:
            return 30;  // April, June, September, November have 30 days
        default:
            return 31;  // All other months have 31 days
    }
}

bool university::Date::is_valid_date(ushort day, ushort month, ushort year) const {
    if (month < 1 || month > 12) return false;

    ushort days_in_month = get_days_in_month(month, year);
    if (day < 1 || day > days_in_month) return false;

    return true;
}

void university::Date::get_attribute_offsets() const {
    std::cout << "Offset of 'day_': " << offsetof(Date, day_) << '\n';
    std::cout << "Offset of 'month_': " << offsetof(Date, month_) << '\n';
    std::cout << "Offset of 'year_': " << offsetof(Date, year_) << '\n';
}