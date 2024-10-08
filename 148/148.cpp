#include <iostream>
using namespace std;

bool ktToanChan(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	if (ktToanChan(n) == 1)
		cout << "So toan chan" << endl;
	else
		cout << "So khong toan chan" << endl;
	return 0;
}

bool ktToanChan(int nn)
{
	int flag = 1;
	while (nn != 0)
	{
		int dv = nn % 10;
		if (dv % 2 != 0)
			flag = 0;
		nn /= 10;
	}
	return flag;
}