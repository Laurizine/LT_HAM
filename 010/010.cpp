#include<iostream>
using namespace std;

void Nhap(float&, float&, float&, float&, float&, float&);
float ChuVi(float, float, float, float, float, float);

int main()
{
	float x1, x2, y1, y2, x3, y3;
	Nhap(x1, x2, x3, y1, y2, y3);
	float kq = ChuVi(x1, x2, x3, y1, y2, y3);
	cout << "Chu vi la: " << kq << endl;
	return 0;
}

void Nhap(float& xx1, float& yy1, float& xx2, float& yy2, float& xx3, float& yy3)//biến cục bộ chỉ sử dụng trong ham Nhap/
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
float ChuVi(float x1, float y1, float x2, float y2, float x3, float y3)
{
	float a = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
	float b = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
	float c = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	float p;
	p = a + b + c;
	return p;
}