#include <iostream>
using namespace std;

bool KiemTra(int);

int main()
{
	int n;
	cout << "Nhap nam: ";
	cin >> n;

	if (KiemTra(n) == 1)
	{
		cout << "La nam nhuan" << endl;
	}
	else
	{
		cout << "Khong la nam nhuan" << endl;
	}
	return 0;
}

bool KiemTra(int nn)
{
	return nn % 4 == 0 && nn % 100 != 0 || nn % 400 == 0;
}