#include <iostream>
using namespace std;

void LietKeUocSoLe(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "Cac uoc so le cua so nguyen duong " << n << " la: ";
	LietKeUocSoLe(n);
	return 0;
}

void LietKeUocSoLe(int nn)
{
	int i = 1;
	while (i <= nn)
	{
		if (nn % i == 0)
			cout << i << endl;
		i = i + 2;
	}
}