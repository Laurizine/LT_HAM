#include <iostream>
using namespace std;

bool ktTamGiacThuong(int, int, int);
bool ktTamGiacDeu(int, int, int);
bool ktTamGiacVuong(int, int, int);
bool ktTamGiacCan(int, int, int);

int main()
{
	float x, y, z;
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap y: ";
	cin >> y;
	cout << "Nhap z: ";
	cin >> z;

	if (ktTamGiacThuong(x, y, z) == 1)
	{
		if (ktTamGiacDeu(x, y, z) == 1)
			cout << "Tam giac deu";
		else
		{
			if (ktTamGiacVuong(x, y, z) == 1)
			{
				if (ktTamGiacCan(x, y, z) == 1)
					cout << "Tam giac vuong can";
				else
					cout << "Tam giac vuong";
			}
			else
			{
				if (ktTamGiacCan(x, y, z) == 1)
					cout << "Tam giac can";
				else
					cout << "Tam giac thuong";
			}
		}
	}
	else
		cout << "Khong la tam giac" << endl;
	return 0;
}

bool ktTamGiacThuong(int xx, int yy, int zz)
{
	return xx + yy > zz && yy + zz > xx && xx + zz > yy;
}

bool ktTamGiacDeu(int xx, int yy, int zz)
{
	return xx == yy && yy == zz;
}

bool ktTamGiacVuong(int xx, int yy, int zz)
{
	return (xx * xx == yy * yy + zz * zz) || (yy * yy == xx * xx + zz * zz) || (zz * zz == yy * yy + xx * xx);
}

bool ktTamGiacCan(int xx, int yy, int zz)
{
	return xx == yy || yy == zz || zz == xx;
}