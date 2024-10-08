#include <iostream>
using namespace std;

int ChuSoDaoNguoc(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "Chu so dao nguoc: " << ChuSoDaoNguoc(n) << endl;
	return 0;
}

int ChuSoDaoNguoc(int t)
{
	int dn = 0;
	while (t != 0)
	{
		int dv = t % 10;
		dn = dn * 10 + dv;
		t = t / 10;
	}
	return dn;
}