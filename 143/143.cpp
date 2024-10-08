#include <iostream>
using namespace std;

bool ktHoanThien(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;


	if (ktHoanThien(n) == 1)
		cout << "So hoan thien" << endl;
	else
		cout << "So khong hoan thien " << endl;
	return 0;
}

bool ktHoanThien(int nn)
{
	int s = 0;
	int i = 1;
	while (i < nn)
	{
		if (nn % i == 0)
			s = s + i;
		i++;
	}
	return s == nn;
}