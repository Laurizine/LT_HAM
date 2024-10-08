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

	cout << "Tong la: " << Tong(x, n);

	return 0;
}

float Tong(float xx, int nn)
{
	int s = 1 + xx;
	int t = xx;
	int m = 1;
	int i = 3;
	while (i <= 2 * nn + 1)
	{
		t *= xx * xx;
		m *= i * (i - 1);
		s += (float)t / m;
		i += 2;
	}
	return s;
}