#include "../include/healthdatafcts.h"

std::uint32_t ageYearsToDays(const std::uint16_t ageYears) {
    const std::uint32_t daysPerYear{ 365 };
    const std::uint32_t ageDays{ ageYears * daysPerYear };

    return ageDays + (ageYears / 4); // Leap years
}

std::uint32_t ageDaysToMins(const std::uint32_t ageDays) {
    const std::uint16_t hoursPerDay{ 24 };
    const std::uint16_t minsPerHour{ 60 };

    return ageDays * hoursPerDay * minsPerHour;
}
