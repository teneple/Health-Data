#include "../include/includes.h"

int main() {
    std::println("Welcome to the Health Data program!");
    std::println("-----------------------------------");

    std::print("Enter your age in years: ");
    std::uint16_t userAgeYears{ 0 };
    std::cin >> userAgeYears;

    std::locale::global(std::locale("")); // For localised formatting

    const std::uint32_t userAgeDays{ ageYearsToDays(userAgeYears) };
    std::println("You are {:L} days old.", userAgeDays); // :L = localised formatting inserting commas

    const std::uint32_t userAgeMins{ ageDaysToMins(userAgeDays) };
    std::println("You are {:L} minutes old.", userAgeMins);

    const std::uint64_t totalHeartBeats{ ageMinsToHeartBeats(userAgeMins) };
    std::println("Your heart has beat {:L} times.", totalHeartBeats);

    std::println("-----------------------------------");
    std::println("The End!");
}
