#include <iostream>
using namespace std;

bool KiemTra(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	int flag = 1;
	int t = n;
	while (t > 1)
	{
		int du = t % 5;
		if (du != 0)
			flag = 0;
		t = t / 5;

	}
	if (KiemTra(n) == 1)
		cout << "La dang 5^m" << endl;
	else
		cout << "Khong la dang 5^m" << endl;
	return 0;
}

bool KiemTra(int nn)
{
	int flag = 1;
	while (nn > 1)
	{
		int du = nn % 5;
		if (du != 0)
			flag = 0;
		nn = nn / 5;
	}
	return flag;
}