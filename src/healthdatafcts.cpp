#include "../include/healthdatafcts.h"

std::uint32_t ageYearsToDays(std::uint16_t ageYears) {
    return static_cast<std::uint32_t>(ageYears * 365.25);
}
