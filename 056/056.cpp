#include <iostream>
using namespace std;

int DemUocChan(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "So luong uoc so cua so nguyen duong " << n << " la:" << DemUocChan(n) << endl;
	return 0;
}

int DemUocChan(int nn)
{
	int dem = 0;
	int i = 2;
	while (i <= nn)
	{
		if (nn % i == 0)
			dem++;
		i = i + 2;
	}
	return dem;
}