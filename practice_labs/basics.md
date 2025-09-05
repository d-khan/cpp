# Lab: Variables, Expressions, Type Conversion & Debugging (C++)

**Duration:** ~75–90 minutes  
**Prereqs:** Basic `main`, I/O (`cin`/`cout`), compiling with `g++`

---

## Learning outcomes
By the end, students can:
1. Use clear, intentional **variable assignments** and initialization.
2. Evaluate and write **arithmetic expressions** with correct precedence and grouping.
3. Identify and control **implicit** vs **explicit** type conversion (coercion).
4. Debug compile-time and run-time issues related to the above.

---

## Part A — Expressions & Assignments

### Task A1: Precedence check

Write a program that reads three integers `a, b, c` and computes:

1. `a + b * c`
2. `(a + b) * c`
3. `a / b * c`
4. `a / (b * c)`

Print each result on its own line with a label.

**Sample run**

```
Input: 5 2 3
a + b * c = 11
(a + b) * c = 21
a / b * c = 6
a / (b * c) = 0
```

### Task A2: Compound assignment 

Read a double `balance` and two integers `deposits` & `withdrawals`.
 Each deposit adds `$25.50`; each withdrawal subtracts `$12.75`.

Use **compound assignments** and print the final balance with **two decimals**.

**Sample run**

```
Input: balance=100.00 deposits=3 withdrawals=4
Final balance = 100.00 + 3*25.50 - 4*12.75 = 126.75
```

*Hint:*

```
#include <iomanip>
std::cout << std::fixed << std::setprecision(2);
```

## Part B — Implicit vs Explicit Conversion 

### Task B1: The “average trap” 

Read three **ints** (exam scores). Print the average twice:

- Implicit (int division)
- Explicit (cast to double)

**Example**

```
Input: 90 95 91
Raw average (implicit): 92
Correct average (explicit cast): 92.0
```

Use:

```
static_cast<double>(sum) / 3
```

### Task B2: Percentage with safe casting 

Read `wins` and `games` (ints). Compute win percentage **as double**.

- If `games == 0`, print: `No games played.`
- Otherwise:

```
double pct = static_cast<double>(wins) / static_cast<double>(games) * 100.0;
```

Print with one decimal place, e.g. `Win% = 62.5%`.

## Part C — Paycheck Calculator 

### Inputs

- `hours` (double), `rate` (double)
- Overtime (> 40 hours) pays 1.5× rate.
- Deduct tax at 18% and benefits fee `$35`.

### Formulas

1. `regHours = min(hours, 40.0)`
2. `otHours = max(hours - 40.0, 0.0)`
3. `gross = regHours*rate + otHours*rate*1.5`
4. `net = gross - (0.18 * gross) - 35.0`

### Output

Show all values with **two decimals**.

**Sample run**

```
Input: hours=46 rate=20
Regular: 40.00, Overtime: 6.00
Gross: $980.00
Tax (18%): $176.40
Benefits: $35.00
Net: $768.60
```

## Part D — Debugging 

Fix the following buggy program:

```
#include <iostream>
#include <iomanip>
int main() {
    int items; double price;
    std::cout << "Enter items and price: ";
    std::cin >> items >> price;

    // BUG 1: uninitialized total
    double total = 0.0;  
    total = items * price; 

    // BUG 2: integer division
    int discountPercent = 15;
    double discount = total * (static_cast<double>(discountPercent) / 100.0);

    // BUG 3: precedence & shipping
    double shipping = 5 + 2 * items;
    double afterDiscount = total - discount;
    if (afterDiscount >= 100.0) shipping = 0;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Total: $" << total << "\n";
    std::cout << "Discount: $" << discount << "\n";
    std::cout << "Shipping: $" << shipping << "\n";
    std::cout << "Grand Total: $" << (afterDiscount + shipping) << "\n";
}
```

**Test cases**

- `items=3 price=25` → grand total `74.75`
- `items=5 price=25` → grand total `106.25` (free shipping)

## Submission

- Remember to add every thing in a structure manner in the markdown file. All C++ code should be inside the markdown file. For example,

## Activity name-1

Here is the code

```cpp
//Here is the code
```

## Activity name-2

Here is the code

```cpp
//Here is the code
```

- A short `README.md` with:
  - One thing you learned about implicit vs explicit conversion.
  - One bug you fixed and how you found it.

## Common pitfalls

- Integer division before multiplication (`a / b * c`) → left-to-right truncation.
- Implicit conversions can hide truncation.
- Assigning `double` to `int` silently loses precision.
- Forgetting parentheses in mixed expressions.

## Stretch goals

- Round tax to cents using `std::round(x * 100.0) / 100.0`.
- Add input validation (non-negative hours/rate).
- Write a simple test harness to verify paycheck outputs.
