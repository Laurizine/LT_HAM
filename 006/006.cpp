#include<iostream>
#include<cmath>
using namespace std;

void Nhap(float&);
float DoC(float);
int main()
{
	float r;
	Nhap(r);
	float kq = DoC(r);
	cout << "Ket qua la: " << kq << endl;
	return r;
}
void Nhap(float& doF)
{
	cout << "Nhap do F: ";
	cin >> doF;
}

float DoC(float c)
{
	float a = (float)9 / 5 * c + 32;
	return a;
}