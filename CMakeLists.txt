cmake_minimum_required (VERSION 3.10)

# Enable Hot Reload for MSVC compilers if supported.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

project ("Health-Data")

add_executable (HealthData "src/main.cpp" "src/healthdatafcts.cpp" "include/includes.h" "include/healthdatafcts.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET HealthData PROPERTY CXX_STANDARD 23)
endif()
