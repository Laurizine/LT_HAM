#include <iostream>
using namespace std;

bool ktToanLe(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	if (ktToanLe(n) == 1)
		cout << "So toan le" << endl;
	else
		cout << "So khong toan le" << endl;
	return 0;
}

bool ktToanLe(int nn)
{
	int flag = 1;
	while (nn != 0)
	{
		int dv = nn % 10;
		if (dv % 2 == 0)
			flag = 0;
		nn /= 10;
	}
	return flag;
}