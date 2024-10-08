#include<iostream>
using namespace std;

void Nhap(float&, float&, float&, float&, float&, float&);
float Dientich(float, float, float, float, float, float);
int main()
{
	float x1, y1, x2, y2, x3, y3;
	Nhap(x1, y1, x2, y2, x3, y3);
	float kq = Dientich(x1, y1, x2, y2, x3, y3);
	cout << "Dien tich la: " << kq;
	return 0;
}

void Nhap(float& xx1, float& yy1, float& xx2, float& yy2, float& xx3, float& yy3)
{
	cout << "Nhap x1: ";
	cin >> xx1;
	cout << "Nhap y1: ";
	cin >> yy1;
	cout << "Nhap x2: ";
	cin >> xx2;
	cout << "Nhap y2: ";
	cin >> yy2;
	cout << "Nhap x3: ";
	cin >> xx3;
	cout << "Nhap y3: ";
	cin >> yy3;
}

float Dientich(float x11, float y11, float x22, float y22, float x33, float y33)
{
	float a = x11 * (y22 - y33);
	float b = x22 * (y11 - y33);
	float c = x33 * (y22 - y11);
	float h = abs(a + b + c);
	float s = (float)1 / 2 * h;
	return s;
}