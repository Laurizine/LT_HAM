#include <iostream>
#include <cmath>
using namespace std;

int Tong(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "Tong la: " << Tong(n) << endl;
	return 0;
}

int Tong(int nn)
{
	int s = 0;
	int i = 1;
	while (i <= nn)
	{
		s = s + pow(i, 3);
		i++;
	}
	return s;
}