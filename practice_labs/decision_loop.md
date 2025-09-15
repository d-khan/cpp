# Decision and loop statements

The short-term, 0-24 hours, parking fee, F, at an international airport is given by the following formula:

$$
F =
\begin{cases}
5, & \text{if } 0 \le h \le 3 \\
6, & \text{if } 3 < h \le 9 \\
60  & \text{if } 9 < h \le 24
\end{cases}
$$

Write a program that prompts the user to enter the number of hours a car is parked at the airport and outputs the parking fee.

```cpp
#include <iostream>
using namespace std;

int main() {
    int hours{}, park_fees{}; bool cond = true;
    char ch;
    cout << "Enter hours: ";
    cin >> hours;

    while (true) {
        if (hours > 24 || hours < 0) {
            cout << "Hours out of range, enter hours between 0-24";
        }

        if (hours <= 3) {
            cout << "Parking fees $5 per hour: " << 5 * hours << endl;
        } else if (hours <= 9) {
            cout << "Parking fees $6 per hour:" << 6 * hours << endl;
        } else {
            cout << "Parking fees flat rate: $60";
        }
        cout << endl << "Do you want to continue?(y/n):";
        cin >> ch;
        if (ch == 'y') {
            continue;
        }
        else {
            break;
        }
    }
}

```
