#include <iostream>
using namespace std;

int main() {
    char ch;
    int var1, var2;
    double var3;

    cin >> ch; // input A
    cout << ch << endl; // assigns ch='A'
    cin >> ch; // input  XY
    cout << ch << endl; // assigns ch='X'
    cin >> ch; // user input is ignored since Y is already in the buffer
    cout << ch << endl; // assigns ch='Y'
    cin >> var1 >> var2; // two integer inputs seperated by a space (more than a space is ignored)
    cout << var1 << " " << var2 << endl; //space is important to separate variables output
    return 0;
}
