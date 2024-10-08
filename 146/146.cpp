#include <iostream>
using namespace std;

bool ktDoiXung(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	if (ktDoiXung(n) == 1)
		cout << "Doi xung" << endl;
	else
		cout << "Khong phai doi xung" << endl;
	return 0;
}

bool ktDoiXung(int nn)
{
	int dn = 0;
	while (nn != 0)
	{
		int dv = nn % 10;
		dn = dn * 10 + dv;
		nn = nn / 10;
	}
	return dn == nn;
}