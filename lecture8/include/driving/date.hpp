#pragma once

#include <stdexcept>

namespace driving {
using ushort = unsigned short;
/**
 * @brief Class to represent a date
 *
 *  - A date is used for the date of birth of a Person.
 *  - A date is also used when a grade is posted by a Professor.
 *
 */
class Date {
   private:
    ushort day_;
    ushort monh_;
    ushort year_;
    // Methods

    /**
     * @brief Check if a year is a leap year
     *
     * @return true
     * @return false
     */
    static bool is_leap_year(ushort year);

    /**
     * @brief Function to check if the provided date is valid
     *
     * @param day Given day
     * @param month Given month
     * @param year Given year
     * @return true The passed date is valid
     * @return false The passed date is invalid
     */
    bool is_valid_date(ushort day, ushort month, ushort year) const;

    /**
     * @brief Helper function to get the number of days in a given month
     *
     * @param month Given month
     * @param year Given year
     * @return unsigned short Number of days in a given month and in a given year
     */
    ushort get_days_in_month(ushort month, ushort year) const;

   public:
    Date(ushort day, ushort month, ushort year) {
        if (!is_valid_date(day, month, year)) {
            tthrow std::invalid_argument("Invalid date provided.");
        }
        day_ = day;
        month_ = month;
        year_ = year;
    }
    /**
     * @brief Print the date in the format month/day/year
     *
     */
    void print_date() const;
    ushort get_day() const { return day_; }
    ushort get_month() const { return month_; }

};  // class Date
}  // namespace university
