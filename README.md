# Project Compilation Instructions

## Prerequisites
To compile and run this project, ensure you have the following installed:

- **CMake** (version 3.x or later)
- **A C++ Compiler**
    - GCC (Linux/macOS)
    - Clang (Linux/macOS)
    - MSVC (Windows)
- **Git** (optional, for cloning the repository)

## Cloning the Repository
If you haven’t already, clone the repository using Git:
```sh
git clone https://github.com/tesfaj762/CS_303_Assignment3.git
cd CS303_Assignment3
```

## Compilation Steps
1. **Create a Build Directory** (if it doesn’t already exist):
   ```sh
   mkdir build
   cd build
   ```

2. **Generate Build Files using CMake**
    - On Linux/macOS:
      ```sh
      cmake ..
      ```
    - On Windows (with MinGW):
      ```sh
      cmake .. -G "MinGW Makefiles"
      ```
    - On Windows (with MSVC):
      ```sh
      cmake .. -G "Visual Studio 17 2022"
      ```

3. **Compile the Project**
    - For Unix-based systems (Linux/macOS):
      ```sh
      cmake --build .
      ```
    - For Windows with MinGW:
      ```sh
      mingw32-make
      ```
    - For Windows with MSVC:
      ```sh
      cmake --build . --config Release
      ```

## Running the Executable
Once compiled, the executable will be located inside the `build` directory. Run it using:
```sh
./main
```

On Windows, use:
```sh
.\main.exe
```

## Notes
- If the program reads from a text file, make sure the file is placed in the same directory as the executable or provide the correct path.
- If you run into permission issues, try running with elevated privileges (`sudo` on Linux/macOS or `Run as Administrator` on Windows).

## Cleaning Up
To remove compiled files and reset the build:
```sh
rm -rf build
```
On Windows:
```sh
rd /s /q build
```
<img width="565" alt="Screenshot 2025-04-21 at 3 33 47 PM" src="https://github.com/user-attachments/assets/d91e01e0-27be-422d-a438-32a0071a6f0e" />
