#include <iostream>
using namespace std;

int TichCacChuSo(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "Tich la: " << TichCacChuSo(n) << endl;
	return 0;
}

int TichCacChuSo(int t)
{
	int s = 1;
	while (t != 0)
	{
		int dv = t % 10;
		s = s * dv;
		t = t / 10;
	}
	return s;
}