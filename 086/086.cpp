#include <iostream>
#include <cmath>
using namespace std;

float Tong(float, int);

int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "Tong la: " << Tong(x, n);

	return 0;
}

float Tong(float xx, int nn)
{
	int s = 0;
	int t = 1;
	int i = 2;
	int dau = -1;
	while (i <= nn)
	{
		t *= xx * xx;
		s += dau * t;
		i += 2;
		dau = -dau;
	}
	return s;
}