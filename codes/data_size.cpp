#include <iostream>
using namespace std;

int main() {
    cout << "Data type sizes in C++ (in bytes):" << endl;
    cout << "----------------------------------" << endl;

    cout << "char: " << sizeof(char) << " byte(s)" << endl;
    cout << "bool: " << sizeof(bool) << " byte(s)" << endl;
    cout << "short: " << sizeof(short) << " byte(s)" << endl;
    cout << "int: " << sizeof(int) << " byte(s)" << endl;
    cout << "long: " << sizeof(long) << " byte(s)" << endl;
    cout << "long long: " << sizeof(long long) << " byte(s)" << endl;
    cout << "float: " << sizeof(float) << " byte(s)" << endl;
    cout << "double: " << sizeof(double) << " byte(s)" << endl;
    cout << "long double: " << sizeof(long double) << " byte(s)" << endl;
    cout << "wchar_t: " << sizeof(wchar_t) << " byte(s)" << endl;

    return 0;
}
