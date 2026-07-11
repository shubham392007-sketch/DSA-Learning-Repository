# Complete C++ Setup Guide for Data Structures and Algorithms (DSA)

## Introduction

To start learning Data Structures and Algorithms using C++, we need a proper development environment.

A good DSA setup should provide:

- C++ compiler to convert code into executable programs.
- Code editor for writing and managing programs.
- Debugging tools for finding errors.
- Terminal environment for running programs.
- Proper folder structure for organizing solutions.

This guide explains the complete setup process using:

- Visual Studio Code
- MinGW-w64 Compiler
- C++ Extensions
- Windows Terminal
- Debugger Configuration

---

# Development Environment Overview

The complete workflow looks like:


C++ Code (.cpp)

    |
    ↓

C++ Compiler (g++)

    |
    ↓

Executable File (.exe)

    |
    ↓

Program Output


---

# Required Software

Before starting DSA with C++, install:

| Software | Purpose |
|---|---|
| Visual Studio Code | Code editor |
| MinGW-w64 | C++ compiler |
| C++ Extension | VS Code C++ support |
| GDB Debugger | Debugging programs |
| Git | Version control |

---

# Step 1: Install Visual Studio Code

## Download VS Code

Download Visual Studio Code from the official website:

https://code.visualstudio.com/

Install VS Code with default settings.

During installation, enable:

- Add "Open with Code" action
- Add to PATH
- Register Code as editor

---

# Step 2: Install MinGW-w64 Compiler

## What is MinGW?

MinGW (Minimalist GNU for Windows) provides the GCC compiler collection for Windows.

It allows us to compile C++ programs using:


g++


---

# Download MinGW-w64

Recommended distribution:

MSYS2 MinGW-w64

Website:

https://www.msys2.org/

---

# Installing MSYS2

After downloading:

1. Install MSYS2.
2. Open MSYS2 terminal.
3. Update packages.

Run:

```bash
pacman -Syu

Restart terminal if required.

Then run:

pacman -Su
Install C++ Compiler

Open MSYS2 MinGW terminal.

Install GCC compiler:

pacman -S mingw-w64-ucrt-x86_64-gcc

This installs:

g++
gcc
standard C++ libraries
Verify Installation

Open terminal:

g++ --version

Expected output:

g++ (GCC) 15.x.x

If version appears, compiler installation is successful.

Step 3: Add MinGW to PATH

PATH allows Windows to find compiler commands from any location.

Find MinGW installation folder:

Example:

C:\msys64\ucrt64\bin

Copy this path.

Add PATH Variable

Open:

System Properties

→ Advanced

→ Environment Variables

→ Path

→ Edit

→ New

Add:

C:\msys64\ucrt64\bin

Save changes.

Verify PATH

Open Command Prompt:

g++ --version

If compiler information appears, PATH configuration is complete.

Step 4: Install VS Code Extensions

Open VS Code.

Go to:

Extensions

Install:

1. C/C++ Extension

Publisher:

Microsoft

Purpose:

Syntax highlighting
IntelliSense
Debugging support
Compiler integration
2. C/C++ Extension Pack

Includes:

C/C++
CMake tools
Debugging support
3. Code Runner

Purpose:

Run C++ programs quickly.

Example:

Right click → Run Code
4. Material Icon Theme

Optional.

Purpose:

Better folder visualization.

Step 5: Configure VS Code for C++

Open VS Code.

Create a folder:

DSA-Cpp

Open folder in VS Code.

Recommended DSA Folder Structure
DSA-Cpp/

│
├── 00_Basics/
│
├── 01_Arrays/
│
├── 02_Strings/
│
├── 03_Linked_List/
│
├── 04_Stack/
│
├── 05_Queue/
│
├── 06_Trees/
│
├── 07_Graphs/
│
├── 08_Dynamic_Programming/
│
└── Practice/
Step 6: Create First C++ Program

Create:

hello.cpp

Add:

#include <iostream>

using namespace std;

int main()
{
    cout << "Hello DSA with C++";

    return 0;
}
Compile C++ Program

Open VS Code terminal.

Run:

g++ hello.cpp -o hello

This creates:

hello.exe
Run Program

Execute:

./hello

Output:

Hello DSA with C++
Step 7: Configure VS Code Build Task

Create:

.vscode/tasks.json

Add:

{
    "version": "2.0.0",
    "tasks": [
        {
            "label": "Compile C++",
            "type": "shell",
            "command": "g++",
            "args": [
                "-std=c++17",
                "${file}",
                "-o",
                "${fileDirname}\\${fileBasenameNoExtension}.exe"
            ],
            "group": {
                "kind": "build",
                "isDefault": true
            }
        }
    ]
}

Now:

Ctrl + Shift + B

will compile your program.

Step 8: Configure Debugging

Create:

.vscode/launch.json

Add:

{
    "version": "0.2.0",
    "configurations": [
        {
            "name": "Debug C++",
            "type": "cppdbg",
            "request": "launch",
            "program": "${fileDirname}\\${fileBasenameNoExtension}.exe",
            "stopAtEntry": false,
            "cwd": "${fileDirname}",
            "externalConsole": true,
            "MIMode": "gdb",
            "miDebuggerPath": "C:\\msys64\\ucrt64\\bin\\gdb.exe"
        }
    ]
}

Now you can:

Add breakpoints.
Execute line by line.
Inspect variables.
Step 9: Configure C++ Standard

For DSA, use:

C++17

because it provides:

Modern syntax
Better STL support
Interview compatibility

Compile using:

g++ -std=c++17 filename.cpp
Important C++ Libraries for DSA
Input Output
#include <iostream>

Used for:

cin
cout
Vectors
#include <vector>

Used for dynamic arrays.

Algorithms
#include <algorithm>

Provides:

sort()
max()
min()
Strings
#include <string>
Maps
#include <map>
#include <unordered_map>
Sets
#include <set>
#include <unordered_set>
Recommended VS Code Settings

Open:

settings.json

Add:

{
    "editor.formatOnSave": true,
    "files.autoSave": "afterDelay",
    "C_Cpp.default.cppStandard": "c++17"
}
Common Compilation Errors
Error: g++ is not recognized

Cause:

Compiler not added to PATH.

Solution:

Add MinGW bin folder to PATH.

Error: Header file not found

Example:

iostream not found

Solution:

Check compiler installation.

Error: Program does not execute

Check:

Correct filename
Correct compiler command
Executable generated successfully
Recommended DSA Coding Template

Create:

template.cpp
#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    return 0;
}

Explanation:

#include <bits/stdc++.h>

Includes almost all standard libraries.

GitHub Integration

Initialize repository:

git init

Add files:

git add .

Commit:

git commit -m "Initial DSA C++ setup"

Connect GitHub:

git remote add origin repository_url

Push:

git push -u origin main
Final Development Workflow

The recommended workflow:

Learn Concept

        ↓

Create Folder

        ↓

Write C++ Implementation

        ↓

Test Locally

        ↓

Analyze Complexity

        ↓

Add Explanation

        ↓

Commit to GitHub
Final Checklist

Before starting DSA, verify:

☑ VS Code installed
☑ MinGW-w64 installed
☑ g++ command working
☑ C++ extensions installed
☑ Debugger configured
☑ C++17 enabled
☑ Git configured
☑ DSA folder structure created

Conclusion

A proper development environment removes unnecessary technical issues and allows complete focus on learning Data Structures and Algorithms.

With VS Code, MinGW-w64, and C++17 configured correctly, the environment is ready for solving problems, practicing algorithms, and building a strong DSA foundation.