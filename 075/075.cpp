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
	int s = 1;
	int t = 1;
	int m = 1;
	int i = 2;
	while (i <= 2 * nn)
	{
		t *= xx * xx;
		m *= i * (i - 1);
		s += (float)t / m;
		i += 2;
	}
	return s;
}