# 🧪 C++ Practice Lab — Strings, Substrings & Text Analysis

## 🎯 Objectives
By the end of this lab, you will be able to:
- Manipulate and analyze strings using STL functions
- Search, extract, and replace substrings
- Count frequencies and detect patterns
- Process text efficiently using modern C++ techniques

---

## 🧠 Concept Review
The `std::string` class (from `<string>`) provides flexible, dynamic text manipulation.  
Key methods include:

| Method | Description | Example | Result |
|--------|--------------|----------|--------|
| `.length()` | Get number of characters | `"Hello".length()" | 5 |
| `.substr(start, len)` | Extract substring | `"Hello".substr(1,3)" | `"ell"` |
| `.find(str)` | Find substring position | `"Hello".find("ll")" | `2` |
| `.replace(pos, len, str)` | Replace part of string | `"Hello".replace(0,2,"Yo")" | `"Yollo"` |
| `.erase(pos, len)` | Delete part | `"Hello".erase(1,2)" | `"Ho"` |
| `.append(str)` | Add to end | `"Hi".append(" there")" | `"Hi there"` |

---

## 🧩 Part 1 — Substring & Search Operations

### 🔹 Task 1: Extract Domain from Email
Ask the user for an email address, then extract the username and domain using `.find()` and `.substr()`.

**Example Input / Output**
```
Input: user@miramar.edu
Output:
Username: user
Domain: miramar.edu
```

💡 *Hint:*
```cpp
int pos = email.find('@');
string user = email.substr(0, pos);
string domain = email.substr(pos + 1);
```

---

### 🔹 Task 2: Replace a Word
Replace all occurrences of `"Miramar"` with `"San Diego Miramar College"`.

```cpp
while ((pos = text.find("Miramar")) != string::npos)
    text.replace(pos, 7, "San Diego Miramar College");
```

**Expected Output**
```
Input: Miramar is great.
Output: San Diego Miramar College is great.
```

---

## 🧮 Part 2 — String Algorithms

---

### 🔹 Task 3: Palindrome Checker (Ignore Spaces)
Write a function:
```cpp
bool isPalindrome(string s);
```
Requirements:
1. Ignore spaces and capitalization  
2. Return true if the string reads the same backward  

**Example**
```
Input: Never odd or even
Output: It’s a palindrome.
```

💡 *Hint:* Use `erase(remove(..., ' '), end())` to remove spaces.

---

## ⚙️ Part 3 — String Logic Challenges

### 🔹 Task 4: Find the Longest Word
Ask the user for a sentence, find and print:
- The **longest word**
- Its **length**

**Example**
```
Input: Welcome to Miramar College
Output:
Longest word: Miramar  
Length: 7
```

---

### 🔹 Task 5: Character Histogram
Count how many times each alphabet letter appears (ignore digits and punctuation).

**Example**
```
Input: Apple Banana
Output:
A -> 5  
B -> 1  
E -> 1  
L -> 1  
N -> 2  
P -> 2
```

💡 *Tip:* Convert to uppercase first:
```cpp
#include <algorithm>
transform(s.begin(), s.end(), s.begin(), ::toupper);
```

---

### 🔹 Task 6: Mask Email Address
Mask everything in the username except the first and last letter.

**Example**
```
Input: user@college.edu
Output: u****r@college.edu
```

💡 *Hint:* Replace characters between index `1` and `pos-1` with `'*'`.

---

## 🧱 Submission Instructions
1. Save your program as `string_lab_advanced.cpp`  
2. Test using multiple sentences and edge cases  
3. Submit:
   - The `.cpp` file  
   - Screenshot of successful execution  

---

## 💎 Extra Credit Ideas
- Sort all words alphabetically using `vector<string>` + `sort()`  
- Create your own `toLowerCase(string)` function without using `<algorithm>`  
- Build a simple keyword search that returns all positions of a given word  
