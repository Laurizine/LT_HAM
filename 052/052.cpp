
#include <iostream>
using namespace std;

int DemUocSo(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "So luong uoc so cua so nguyen duong " << n << " la:" << DemUocSo(n) << endl;
	return 0;
}

int DemUocSo(int nn)
{
	int dem = 0;
	int i = 1;
	while (i <= nn)
	{
		if (nn % i == 0)
			++dem;
		i++;
	}
	return dem;
}