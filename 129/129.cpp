#include<iostream>
using namespace std;

void Hoanvi(int&, int&);

int main()
{
    int a, b, c;
    cout << "Nhap gia tri a = ";
    cin >> a;
    cout << "Nhap gia tri b = ";
    cin >> b;
    cout << "Nhap gia tri c = ";
    cin >> c;

    // Sắp xếp a, b, c theo thứ tự tăng dần
    if (a > b) Hoanvi(a, b);
    if (a > c) Hoanvi(a, c);
    if (b > c) Hoanvi(b, c);

    cout << "Thu tu tang dan: " << a << " " << b << " " << c << endl;

    return 0;
}

void Hoanvi(int& x, int& y)
{
    int temp = x;
    x = y;
    y = temp;
}
