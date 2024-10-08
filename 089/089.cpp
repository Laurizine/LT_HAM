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
	int m = 0;
	int t = 1;
	int i = 1;
	int dau = -1;
	while (i <= nn)
	{
		t *= xx;
		m += i;
		s += (float)dau * t / m;
		i++;
		dau = -dau;
	}
	return s;
}