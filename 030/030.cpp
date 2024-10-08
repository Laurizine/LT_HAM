#include<iostream>
using namespace std;

void Nhap(float&);
float Tong(float);

int main()
{
	float n;
	Nhap(n);
	float kq = Tong(n);
	cout << "Tong la: " << kq << endl;
	return 0;
}

void Nhap(float&nhapn)
{
	cout << "NHap n: ";
	cin >> nhapn;
}

float Tong(float nn)
{
	float s = 0;
	int i = 2;
	while (i <= 2 * nn)
	{
		s = s + (float)1 / i;
		i += 2;
	}
	return s;
}