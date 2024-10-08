#include <iostream>
using namespace std;

bool KiemTra(float, float, float, float, float, float);
float KhoangCach(float, float, float, float);

int main()
{
	float x1, y1, x2, y2, x3, y3;
	cout << "Nhap x1: ";
	cin >> x1;
	cout << "Nhap y1: ";
	cin >> y1;
	cout << "Nhap x2: ";
	cin >> x2;
	cout << "Nhap y2: ";
	cin >> y2;
	cout << "Nhap x3: ";
	cin >> x3;
	cout << "Nhap y3: ";
	cin >> y3;

	if (KiemTra(x1, y1, x2, y2, x3, y3) == 1)
		cout << "La tam giac" << endl;
	else
		cout << "Khong la tam giac" << endl;
	return 0;
}

float KhoangCach(float xx1, float yy1, float xx2, float yy2)
{
	return sqrt((xx2 - xx1) * (xx2 - xx1) + (yy2 - yy1) * (yy2 - yy1));
}

bool KiemTra(float xx1, float yy1, float xx2, float yy2, float xx3, float yy3)
{
	float a = KhoangCach(xx1, yy1, xx2, yy2);
	float b = KhoangCach(xx1, yy1, xx3, yy3);
	float c = KhoangCach(xx3, yy3, xx2, yy2);
	return a + b > c && a + c > b && b + c > a;
}