#include<iostream>
using namespace std;

void Nhap(int&);
float Tong(int);

int main()
{
	int n;
	Nhap(n);
	float kq = Tong(n);
	cout << "Tong la: " << kq << endl;
	return 0;
}

void Nhap(int& nhapn)
{
	cout << "NHap n: ";
	cin >> nhapn;
}

float Tong(int nn)
{
	double s = 0.0;
	int i = 1;

	while (i <= nn) 
	{
		s = s + 1.0 / (i * (i + 1));
		i++;
	}
	return s;
}