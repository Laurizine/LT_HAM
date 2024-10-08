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

	cout << "Tong la: " << Tong(x, n) << endl;
	return 0;
}

float Tong(float xx, int nn)
{
	float s = 1 - xx;
	int m = 1;
	float t = xx;
	int dau = 1;
	int i = 3;
	while (i <= 2 * nn + 1)
	{
		m = m * (i - 1) * i;
		t = t * xx * xx;
		s = s + dau * t / m;
		dau = -dau;
		i += 2;
	}
	return s;
}