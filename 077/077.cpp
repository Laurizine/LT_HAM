#include <iostream>
#include <cmath>
using namespace std;

int Tong(int, int);

int main()
{
	int k;
	cout << "Nhap k: ";
	cin >> k;
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "Tong la: " << Tong(k, n);

	return 0;
}

int Tong(int kk, int nn)
{
	int s = 0;
	int i = 2;
	while (i <= nn)
	{
		s += pow(i, kk);
		i++;
	}
	return s;
}