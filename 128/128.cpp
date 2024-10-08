#include<iostream>
using namespace std;

void Hoanvi(int&, int&);

int main()
{
    int a, b;
    cout << "Nhap gia tri a = ";
    cin >> a;
    cout << "Nhap gia tri b = ";
    cin >> b;

    Hoanvi(a, b);

    cout << "Thu tu tang dan: " << a << " " << b << endl;

    return 0;
}

void Hoanvi(int& aa, int& bb)
{
    int temp = aa;
    aa = bb;
    bb = temp;
}
