#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

float Tinh(float);

int main() {
    float n;
    cout << "Nhap n: ";
    cin >> n;
    float kq = Tinh(n);
    cout << "Ket qua la: " << kq << endl;
    return 0;
}

float Tinh(float x) {
    float s = 4.0 - 2.0 / 4.0 - 1.0 / 5.0 - 1.0 / 6.0;
    int i = 1;
    float e = 1.0;
    while (e >= pow(10, -6)) {
        e = ((4.0 / (8.0 * i + 1.0)) - (2.0 / (8.0 * i + 4.0)) - (1.0 / (8.0 * i + 5.0)) - (1.0 / (8.0 * i + 6.0)));
        s = s + e;
        i++;
    }
    return s;
}
