# Health-Data
A simple 'Hello-World' like project that calculates the user's age in days and minutes. As well as calculates the user's total number of heartbeats in their current lifetime.
This is a starter CMake console project that is cross-platform on Windows, Linux and macOS made using MSVC.
It currently does not include error handling such as invalid inputs.

Project structure:
```
Health-Data/
├── include/                - Header files
│   └── healthdatafcts.h    - Health Data function declarations
│   └── includes.h          - Precompiled header file
├── src/                    - Source files
│   ├── healthdatafcts.cpp    - Health Data calculation logic
│   └── main.cpp            - Entry point of the program
├── CMakeLists.txt          - Build configuration
├── LICENSE                 - Project licence
├── README.md               - Project documentation
└── bld/                    - Build directory (generated)
```

# Building & Running the code
The Release version of the executable is found in https://github.com/teneple/Health-Data/releases.
This code was made using C++23 features which requires CMake version 3.20+ and your respective compiler version that support C++23.

1. Clone this repository: `git clone https://github.com/teneple/Health-Data.git && cd Health-Data`
2. Make a build directory: `mkdir bld && cd bld`
3. Run CMake: `cmake ..`
4. Build with CMake: `cmake --build .`
5. If you are on Windows:
   - If you compiled with MSVC, then run the Debug executable: `.\Debug\HealthData.exe`. Alternatively you can open the Visual Studio solution file with Visual Studio: `Health-Data.sln` and run from the IDE.
   - Otherwise, run the executable: `.\HealthData.exe`.
6. Otherwise, run the executable: `./HealthData`.
