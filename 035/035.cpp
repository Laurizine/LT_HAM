#include <iostream>
using namespace std;

float Tich(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "Tich la: " << Tich(n) << endl;
	return 0;
}

float Tich(int nn)
{
	int t = 1;
	int i = 1;
	while (i <= nn)
	{
		t = t * i;
		i++;
	}
	return t;
}