#include <iostream>
using namespace std;

int TimSoHang(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "So hang thu " << n << " : " << TimSoHang(n) << endl;
	return 0;
}

int TimSoHang(int nn)
{
	int ahh = 0;
	int att = 1;
	int at = 1;
	int i = 2;
	while (i <= nn)
	{
		ahh = at + att;
		i++;
		att = at;
		at = ahh;
	}
	return ahh;
}