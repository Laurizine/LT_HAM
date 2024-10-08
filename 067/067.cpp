#include <iostream>
using namespace std;

bool KiemTra(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;


	if (KiemTra(n) == 1)
	{
		cout << "Ton tai chu so le" << endl;
	}
	else
	{
		cout << "Khong ton tai chu so le" << endl;
	}
	return 0;
}

bool KiemTra(int t)
{
	bool flag = 0;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 != 0)
			flag = 1;
		t = t / 10;
	}
	return flag;
}