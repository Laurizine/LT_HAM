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
    float att = -1;  // Khởi tạo số hạng đầu tiên
    float at = 3;
    int i = 2;
    while (i <= nn)
    {
        float ahh = 5.0 * at + 6.0 * att;
        att = at;  // Cập nhật giá trị của att sau khi tính toán
        at = ahh;  // Cập nhật giá trị của at bằng giá trị mới tính toán của ahh
        i++;
    }
    return at;  // Trả về giá trị cuối cùng của at
}

void Xuat(float nn, float kq)
{
    cout << "So hang thu " << nn << " cua day la: " << kq << endl;
}
