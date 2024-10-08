#include <iostream>
using namespace std;

bool KiemTra(int);
void XuatNamNhuan(int, int);

int main()
{
	int x;
	cout << "Nhap x: ";
	cin >> x;

	int y;
	cout << "Nhap y: ";
	cin >> y;

	cout << "Nam nhuan: ";
	XuatNamNhuan(x, y);

	return 0;
}

bool KiemTra(int nn)
{
	return nn % 4 == 0 && nn % 100 != 0 || nn % 400 == 0;
}

void XuatNamNhuan(int xx, int yy)
{
	while (xx <= yy)
	{
		if (KiemTra(xx) == 1)
			cout << xx << " ";
		++xx;
	}
}