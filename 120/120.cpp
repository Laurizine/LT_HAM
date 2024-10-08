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
	float ahh = 0;
	float at = 2;
	int i = 2;
	while (i <= nn)
	{
		ahh = 5 * at + sqrt(24 * at * at - 8);
		i++;
		at = ahh;
	}
	return ahh;
}