#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
float Tinh(int n);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Ket qua:" << Tinh(n) << endl;

}

float Tinh(int nn)
{
	int s = 0;
	int dau = 1;
	int e = 4;
	int i = 1;
	while (e >= pow(10, -6))
	{
		e = e / i;
		s = s + e * dau;
		i = i + 2;
		dau = -dau;
	}
	return s;
}
