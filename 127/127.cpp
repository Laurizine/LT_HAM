#include<iostream>
using namespace std;

float GTLN(float, float);
int main()
{
	int a, b;
	cout << "Nhap gia tri a = ";
	cin >> a;
	cout << "Nhap gia tri b = ";
	cin >> b;
	cout << "Gia tri nho nhat cua " << a << " va " << b << " la " << GTLN(a, b);
}


float GTLN(float aa, float bb)
{
	int lc = aa;
	if (lc > bb)
		lc = bb;
	return lc;
}
