#include <iostream>
using namespace std;

bool KiemTra(int, int, int);

int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;

	float y;
	cout << "Nhap y: ";
	cin >> y;

	float z;
	cout << "Nhap z: ";
	cin >> z;

	if (KiemTra(x, y, z) == 1)
	{
		cout << "La tam giac" << endl;
	}
	else
	{
		cout << "Khong la tam giac" << endl;
	}
	return 0;
}

bool KiemTra(int xx, int yy, int zz)
{
	return xx + yy > zz && xx + zz > yy && yy + zz > xx;
}