#include<iostream>
#include<cmath>
using namespace std;

void Nhap(float&);
float DoF(float);
int main()
{
	float r;
	Nhap(r);
	float kq = DoF(r);
	cout << "Ket qua la: " << kq << endl;
	return r;
}
void Nhap(float& doF)
{
	cout << "Nhap do F: ";
	cin >> doF;
}

float DoF(float f)
{
	float a = (float)5 / 9 * f - 32;
	return a;
}