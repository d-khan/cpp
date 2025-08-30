# Tokens example code
<div class="mt-10"></div>

<div class="mt-10"></div>
<div class="flex items-center justify-between w-full">
  <span class="px-2 py-1 text-xs font-medium !text-white bg-blue-800 rounded">
    tokens.cpp | Example code shows tokens in C++
  </span>
  <a href="https://github.com/d-khan/cpp/blob/main/codes/printing_add.cpp"
     target="_blank"
     rel="noopener noreferrer"
     class="inline-block px-2 py-1 rounded bg-blue-600 !text-white text-xs font-medium no-underline hover:bg-blue-800 transition-colors duration-200 whitespace-nowrap outline-none focus:ring-0">
    Copy code
  </a>
</div>

````md magic-move {lines: true}
```cpp {*}

#include <iostream>   // Preprocessor directive (not a token, but expands before tokens)

using namespace std;  // Keywords: using, namespace

int main() {          // Keyword: int, Identifier: main, Punctuators: ()
    // ---- Identifiers, Literals, Operators, Punctuators ----
    int a = 10;       // Keyword: int | Identifier: a | Operator: = | Literal: 10 | Punctuator: ;
    int b = 20;       // Keyword: int | Identifier: b | Operator: = | Literal: 20 | Punctuator: ;

    int sum = a + b;  // Identifier: sum | Operators: =, + | Identifiers: a, b

    // ---- String Literal ----
    cout << "Sum = " << sum << endl; 
    // Identifier: cout | Operators: << | String literal: "Sum = " | Identifier: sum | Identifier: endl

    return 0;         // Keyword: return | Literal: 0
}
```
````
