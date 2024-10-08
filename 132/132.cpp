#include <iostream>
using namespace std;

bool KiemTra(float, float, float, float, float, float, float, float);
float DienTich(float, float, float, float, float, float);

int main()
{
	float x1, y1, x2, y2, x3, y3, x0, y0;
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
	cout << "Nhap x0: ";
	cin >> x0;
	cout << "Nhap y0: ";
	cin >> y0;

	if (KiemTra(x1, y1, x2, y2, x3, y3, x0, y0) == 1)
		cout << "M trong ABC" << endl;
	else
		cout << "M ngoai ABC" << endl;
	return 0;
}

float DienTich(float xx1, float yy1, float xx2, float yy2, float xx3, float yy3)
{
	return abs(xx1 * yy2 + xx2 * yy3 + xx3 * yy1 - xx2 * yy1 - xx3 * yy2 - xx1 * yy3);
}

bool KiemTra(float xx1, float yy1, float xx2, float yy2, float xx3, float yy3, float xx0, float yy0)
{
	float SABC = DienTich(xx1, yy1, xx2, yy2, xx3, yy3);
	float SMAB = DienTich(xx1, yy1, xx2, yy2, xx0, yy0);
	float SMBC = DienTich(xx1, yy1, xx0, yy0, xx3, yy3);
	float SMAC = DienTich(xx0, yy0, xx2, yy2, xx3, yy3);
	return SABC == SMAB + SMAC + SMBC;
}