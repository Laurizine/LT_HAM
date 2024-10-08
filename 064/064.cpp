#include <iostream>
using namespace std;

int ChuSoLonNhat(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "Chu so lon nhat la: " << ChuSoLonNhat(n) << endl;
	return 0;
}

int ChuSoLonNhat(int t)
{

	int lc = t % 10;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv > lc)
			lc = dv;
		t = t / 10;
	}
	return lc;
}