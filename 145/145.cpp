#include<iostream>
using namespace std;

int ktchinhphuong(int);

int main()
{
	int n;
	cout << "Nhap n :";
	cin >> n;

	if (ktchinhphuong(n) == 1)
		cout << n << " la so chinh phuong";
	else
		cout << n << " khong phai so chinh phuong";
	return 0;
}

int ktchinhphuong(int nn)
{
	int flag = 0;
	int i = 0;
	while (i <= nn)
	{
		if (i * i == nn)
			flag = 1;
		i++;
	}
	return flag ;
}

