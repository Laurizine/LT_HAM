#include <iostream>
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
	float s = -1;
	int m = 1;
	float t = 1;
	int dau = 1;
	int i = 2;
	while (i <= 2 * nn)
	{
		m = m * (i - 1) * i;
		t = t * xx * xx;
		s = s + dau * t / m;
		dau = -dau;
		i += 2;
	}
	return s;
}