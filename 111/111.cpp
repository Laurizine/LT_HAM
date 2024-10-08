#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

double Tinh(float n);

int main()

{
	int a;
	cout << "Nhap n:";
	cin >> a;
	Tinh(a);
	float kq = Tinh(a);
	cout << "Ket qua la:" << kq << endl;
}

double Tinh(int a)
{
	int s = 3;
	int dau = 1;
	int e = 3;
	int i = 1;
	while (e >= pow(10, -6))
	{
		e = 4 * (i * (i + 1) * (i + 2));
		s = s + dau * e;
		dau = -dau;
		i = i + 2;
	}
	return s;
}
