#include <iostream>
#include <cmath>
using namespace std;

void Nhap(float&);
float Tinh(float);
void Xuat(float, float);

int main()
{
    float n;
    Nhap(n);
    float kq = Tinh(n);
    Xuat(n, kq);
    return 0;
}

void Nhap(float& nn)
{
    cout << "Nhap n: ";
    cin >> nn;
}

float Tinh(float nn)
{
    float at = -2;  // Khởi tạo số hạng đầu tiên
    float ahh = 0;
    int T = 3;
    int P = 7;
    int i = 2;
    while (i <= nn)
    {
        T = T * 3;
        P = P * 7;
        ahh = (5.0 * at + 2 * T - 6 * P + 12);
        at = ahh;  // Cập nhật giá trị của at sau khi tính toán
        i++;
    }
    return at;  // Trả về giá trị cuối cùng của at
}

void Xuat(float nn, float kq)
{
    cout << "So hang thu " << nn << " cua day la: " << kq << endl;
}
