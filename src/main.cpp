#include "../include/includes.h"

int main() {
    std::println("Welcome to the Health Data program!");
    std::println("-----------------------------------");

    std::print("Enter your age in years: ");
    std::uint16_t userAgeYears = 0;
    std::cin >> userAgeYears;

    std::uint32_t userAgeDays = ageYearsToDays(userAgeYears);
    std::println("You are {:L} days old.", userAgeDays); // :L = localised formatting (still not available in MSVC)
}
