#pragma once

#include <cstdint>

std::uint32_t ageYearsToDays(const std::uint16_t ageYears);
std::uint32_t ageDaysToMins(const std::uint32_t ageDays);
std::uint64_t ageMinsToHeartBeats(const std::uint32_t ageMins);
