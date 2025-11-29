cmake_minimum_required(VERSION 3.20)

# Enable Hot Reload for MSVC compilers if supported.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

project ("Health-Data")

set(MISC_FILES
    .gitignore
    CMakePresets.json
    LICENSE
    README.md
)
file(GLOB_RECURSE SOURCES CONFIGURE_DEPENDS src/*.cpp include/*.h)
add_executable(HealthData ${SOURCES} ${MISC_FILES})
source_group(TREE ${CMAKE_CURRENT_SOURCE_DIR} FILES ${SOURCES})

set_property(TARGET HealthData PROPERTY CXX_STANDARD 23)
