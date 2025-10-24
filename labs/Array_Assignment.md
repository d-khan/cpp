# 🧮 Assignment: Working with Arrays in C++

## 🎯 Objective
Practice working with arrays and basic control structures in C++. You will write a program that:
1. Accepts **unique integers** (no duplicates).  
2. Allows the user to **perform operations** on the array:
   - Sort the array (ascending or descending)  
   - Find the maximum number  

You will **not** use any library other than the ones specified.

---

## 🧠 Instructions

1. Create a C++ program that:
   - Declares a **fixed-size `std::array<int, N>`** (you can choose `N = 5` or any small number).
   - Prompts the user to **enter unique integers** (ensure no duplicates are allowed).
   - Displays a menu asking the user to perform one of the following operations:
     - **(a)** Sort the array in ascending order  
     - **(b)** Sort the array in descending order  
     - **(c)** Find the **maximum number**
   - Uses only **manual sorting logic** (e.g., nested loops).  
   - Displays the results clearly after the operation.

2. **Allowed headers only:**
   ```cpp
   #include <iostream>
   #include <array>
   ```

3. **Not allowed:**
   - `<algorithm>`
   - `<vector>`
   - `<set>` or any STL container other than `std::array`
   - Any other header files

---

## 🧩 Example Output

```
Enter 5 unique integers:
Element 1: 4
Element 2: 9
Element 3: 2
Element 4: 9
Duplicate found! Enter a different number.
Element 4: 6
Element 5: 3

Choose an operation:
1. Sort Ascending
2. Sort Descending
3. Find Maximum
Enter your choice: 1

Array sorted in ascending order:
2 3 4 6 9
```

---

## 💡 Hints
- Use **nested loops** for sorting (like bubble sort).
- Use a **`switch` statement** for menu selection.
- Keep your code modular and readable.

---

## 📦 Submission Requirements
- Submit the code in github in markdown format and share the link. No grading if the file is not formatted and uploaded correctly
- File name: `array_operations.md`
- Include your **name**, **course**, and **date** as comments at the top of the file.

```cpp
// Name: Your Full Name
// Course: CISC 187 - Data Structures in C++
// Date: MM/DD/YYYY
// Assignment: Non-Duplicated Integer Array Operations
```

---

## ✅ Grading Rubric

| Criteria | Points |
| :-- | --: |
| Correct implementation of unique array input | 20 |
| Sorting logic (ascending and descending) | 25 |
| Finding maximum element | 15 |
| Correct use of `<array>` and `<iostream>` only | 20 |
| Code readability and output clarity | 10 |
| Comments and documentation | 10 |
| **Total** | **100** |
