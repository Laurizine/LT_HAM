#include<iostream>
using namespace std;

void Nhap(float&);
float Tich(float);
int main()
{
	float x;
	Nhap(x);
	float kq = Tich(x);
	cout << "X^13 bang: " << kq << endl;
	return 0;
}

void Nhap(float& xx)
{
	cout << "Nhap x: ";
	cin >> xx;
}

float Tich(float xx)
{
	float x2 = xx * xx;
	float x4 = x2 * x2;
	float x8 = x4 * x4;
	float x12 = x4 * x8;
	float x13 = xx * x12;
	return x13;
}