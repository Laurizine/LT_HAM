#include <iostream>
#include <cmath>
using namespace std;

void Nhap(int&);
float Tinh(int);


int main() {
    int n;
    Nhap(n);
    float kq = Tinh(n);
    cout << "So hang thu " << n << " cua day la " << kq << endl;
    return 0;
}


void Nhap(int& nn) {
    cout << "Nhap n: ";
    cin >> nn;
}

float Tinh(int nn) {
    float at = 2;
    int i = 2;
    while (i <= nn) {
        float ahh = at + 2 * i + 1;
        i++;
        at = ahh;
    }
    return at;
}
