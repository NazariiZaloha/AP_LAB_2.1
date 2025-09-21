#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a;
    double z1;
    double z2;
    a = a * M_PI / 180.0;
    cout << "Enter a:" << endl; cin >> a;
    z1 = 1 - 0.25 * (2 * (sin(a) * sin(a))) + 2 * (cos(a));
     z2 = (cos(a) * cos(a))  + (cos(a) * cos(a) * cos(a) *cos(a));

    cout << "z1:  " << z1 << endl;
    cout << "z2:  " << z2 << endl;
    return 0;
}