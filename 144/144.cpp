#include<iostream>
using namespace std;

int KTnguyento;
int main()
{
	int n;
	cout << "Nhap n :";
	cin >> n;
	if (KTnguyento(n) == 1)
		cout << "la so nguyen to !!!" << KTnguyento(n);
	else
		cout<<
	return 0;
}

int KTnguyento(int nn)
{
	int dem = 0;
	int i = 1;
	while (i <= nn)
	{
		if (nn % i == 0)
			dem++;
		i++;
	}
	if (dem == 2)
	return 1;

	return 0;
}