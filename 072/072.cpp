#include <iostream>
using namespace std;

float Tong(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "Tong la: " << Tong(n);

	return 0;
}

float Tong(int nn)
{
	int s = 0;
	int m = 0;
	int i = 1;
	while (i <= nn)
	{
		m += i;
		s += (float)1 / m;
		i++;
	}
	return s;
}