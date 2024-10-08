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

	cout << "Tong luy thua bac chan: " << Tong(x, n);

	return 0;
}

float Tong(float xx, int nn)
{
	int s = 0;
	int t = 1;
	int i = 2;
	while (i <= 2 * nn)
	{
		t *= xx * xx;
		s += t;
		i += 2;
	}
	return s;
}