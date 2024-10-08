#include <iostream>
#include <cmath>
using namespace std;

float Tong(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;


	cout << "S = " << Tong(n) << endl;
	return 0;
}

float Tong(int nn)
{
	float s = 0;
	int i = 2;
	while (i <= nn)
	{
		s = pow(s + i, (float)1 / (i + 1));
		i++;
	}
	return s;
}