#include <iostream>
#include <limits>
using namespace std;

int main() {
    cout << "int range: "
         << numeric_limits<int>::min() << " to "
         << numeric_limits<int>::max() << endl;

    cout << "double lowest: " << numeric_limits<double>::lowest() << endl;
    cout << "double min (smallest positive): " << numeric_limits<double>::min() << endl;
    cout << "double max: " << numeric_limits<double>::max() << endl;
    cout << "double infinity: " << numeric_limits<double>::infinity() << endl;
    return 0;
}
