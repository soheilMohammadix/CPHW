#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float x, y, z;
    int result0, result1;
    cout << "Please enter x : ";
    cin >> x;
    cout << "Please enter y : ";
    cin >> y;
    cout << "Please enter z : ";
    cin >> z;
    result0 = (x - y) * (x + z) ;
    result1 = pow(x + y + z, 2) + 1;
    cout <<(float) result0 / result1;
}
