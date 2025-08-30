#include <iostream>   // Preprocessor directive (not a token, but expands before tokens)

using namespace std;  // Keywords: using, namespace

int main() {          // Keyword: int, Identifier: main, Punctuators: ()
    // ⬇️⬇️⬇️ Identifiers, Literals, Operators, Punctuators ⬇️⬇️⬇️
    int a = 10;       // Keyword: int | Identifier: a | Operator: = | Literal: 10 | Punctuator: ;
    int b = 20;       // Keyword: int | Identifier: b | Operator: = | Literal: 20 | Punctuator: ;

    int sum = a + b;  // Identifier: sum | Operators: =, + | Identifiers: a, b

    // ⬇️⬇️⬇️ String Literal ⬇️⬇️⬇️
    cout << "Sum = " << sum << endl; 
    // Identifier: cout | Operators: << | String literal: "Sum = " | Identifier: sum | Identifier: endl

    return 0;         // Keyword: return | Literal: 0
}
