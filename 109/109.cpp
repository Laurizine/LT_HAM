#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

float Tinh(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "Ket qua: " << Tinh(n);

	return 0;
}

float Tinh(int nn)
{
	float s = 0;
	int dau = 1;
	float e = 4;
	int i = 1;
	float epsilon = pow(10, -6);
	while (e >= epsilon)
	{
		e = (float)4 / i;
		s += dau * e;
		i += 2;
		dau = -dau;
	}
	return s;
}