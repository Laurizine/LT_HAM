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
	int s = xx;
	int t = xx;
	int i = 3;
	int dau = -1;
	while (i <= 2 * nn + 1)
	{
		t *= xx * xx;
		s += dau * t;
		i += 2;
		dau = -dau;
	}
	return s;
}