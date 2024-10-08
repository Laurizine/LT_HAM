#include <iostream>
using namespace std;

bool KiemTra(float, float, float);

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
		cout << "BDT dung" << endl;
	}
	else
	{
		cout << "BDT sai" << endl;
	}
	return 0;
}

bool KiemTra(float xx, float yy, float zz)
{
	return xx <= yy && yy <= zz;
}