#include <iostream>
using namespace std;

void XuatKq(float, float);

int main()
{
	float a;
	cout << "Nhap a: ";
	cin >> a;

	float b;
	cout << "Nhap b: ";
	cin >> b;

	XuatKq(a, b);

	return 0;
}

void XuatKq(float aa, float bb)
{
	if (aa == 0)
		if (bb == 0)
			cout << "Vo so nghiem" << endl;
		else
			cout << "Vo nghiem" << endl;
	else
	{
		float x = -bb / aa;
		cout << x << endl;
	}
}