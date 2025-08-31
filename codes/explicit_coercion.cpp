#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    cout << "static_cast<int>(4.5) = " << static_cast<int>(4.5) << endl;
    cout << "static_cast<double>(15.70) = " << static_cast<int>(15.70) << endl;
    cout << "static_cast<double>(5+3) = " << static_cast<double>(5 + 3) << endl;
    /* cout prints a floating-point number without decimals if it’s a whole number.
    So it prints 8(not 8.0); double(5+3) does create 8.0 internally, */
    cout << "static_cast<double>(5+3) after setting the precision is " //  */ splits the long line code */
    << fixed << setprecision(1) << double(5 + 3) << endl;
    cout << "int(15.34) = " << int(15.34) << endl; //c-style casting
    return 0;
}
