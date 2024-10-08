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
	Xuat(n,kq);

}

void Nhap(float& bb)
{
	cout << "Nhap n:";
	cin >> bb;
}

float Tinh(float aa)
{
	float at = 2;
	int i = 2;
	while (i <= aa)
	{
		float ahh = (-9.0 * at - 24) / (5.0 * at + 13);
		i++;
		at = ahh;
	}
	return at;
}

void Xuat(float nn , float kq )
{
	cout << "So hang thu " << nn << " cua day la: " << kq << endl;
}