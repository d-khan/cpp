# Beginner-Friendly Guide: Installing a C++ Compiler

This guide will help you install a C++ compiler on **Windows, macOS, or Linux**.  
Follow the steps for your operating system. At the end, you’ll test your compiler with a simple program.

---

## Windows (MSYS2)

1. Go to the [MSYS2](https://www.msys2.org/) and follow the installation steps (1-7) posted on the website.
2. Add C:\msys64\mingw64\bin path in Windows
   - Go to Windows search and type "System Variables". Select "Edit the system environment variables" -> Environment Variables -> System variables -> Highlight Path -> Edit -> New -> Then paste C:\msys64\mingw64\bin -> select OK several times -> Restart your computer
3. After restart -> Go to command prompt -> type ```g++ --version``` -> the following output will display
```txt
g++ (Rev8, Built by MSYS2 project) 15.2.0
Copyright (C) 2025 Free Software Foundation, Inc.
This is free software; see the source for copying conditions.  There is NO
warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
```

```bash
g++ --version
```

If you see a version number, you’re done!

## macOS

1. Open **Terminal**.

2. Run:

   ```
   xcode-select --install
   ```

3. Verify installation with:

   ```
   clang++ --version
   ```

You should see Apple Clang listed.

## Linux (Ubuntu/Debian)

1. Update packages:

   ```
   sudo apt update
   ```

2. Install compiler:

   ```
   sudo apt install g++
   ```

3. Verify installation:

   ```
   g++ --version
   ```

You should see GNU C++ version.

------

## Test Your Compiler

1. Create a file named **hello.cpp** with the following code:

   ```
   #include <iostream>
   using namespace std;
   
   int main() {
       cout << "Hello, C++!" << endl;
       return 0;
   }
   ```

2. Compile and run:

   ```
   g++ hello.cpp -o hello
   ./hello     # On Windows use: hello.exe
   ```

 Expected output:

```
Hello, C++!
```
