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

	cout << "Tong luy thua bac le: " << Tong(x, n);

	return 0;
}

float Tong(float xx, int nn)
{
	int s = xx;
	int t = xx;
	int i = 3;
	while (i <= 2 * nn + 1)
	{
		t *= xx * xx;
		s += t;
		i += 2;
	}
	return s;
}