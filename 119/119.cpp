#include<iostream>
#include<cmath>
using namespace std;

void Nhap(float&);
float Tinh(float);
void  Xuat(float n, float kq);
int main()
{
	float n;
	Nhap(n);
	float kq = Tinh(n);
	Xuat(n, kq);
	return 0;
}

void Nhap(float& nn)
{
	cout << "Nhap gia tri n: ";
	cin >> nn;
}

float Tinh(float a)
{
	float at = 2;
	int i = 2;
	while (i <= a)
	{
		float ahh = (at * at + 2) / (2 * at);
		i++;
		at = ahh;
	}
	return at;
}

void Xuat(float nn, float kqkq)
{
	cout << "So hang thu " << nn << " cua day la: " << kqkq << endl;
}