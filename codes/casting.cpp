#include <iostream>
using namespace std;

int main() {
    int x = 5;
    char y = '3';   // ASCII value = 51

    cout << "x + y = " << (x + y) << endl;   // 5 + 51 = 56
    cout << "x + (y - '0') = " << (x + (y - '0')) << endl; // 5 + 3 = 8

    float z = 2.5;
    cout << "x + z = " << (x + z) << endl;   // int promoted to float → 7.5

    return 0;
}
