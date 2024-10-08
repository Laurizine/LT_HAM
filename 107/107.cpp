#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

float Tinh(float x);

int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;

	cout << "Ket qua: " << Tinh(x);

	return 0;
}

float Tinh(float xx)
{
	float nn = (xx * M_PI) / 180;
	float s = 1;
	float t = 1;
	int m = 1;
	float e = 1;
	int i = 1;
	float epsilon = pow(10, -6);
	while (e >= epsilon)
	{
		t *= nn;
		m *= i;
		e = t / m;
		s += e;
		i++;
	}
	return s;
}