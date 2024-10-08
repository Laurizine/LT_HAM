#include <iostream>
using namespace std;

void TriTuyetDoi(int&);

int main()
{
	int a;
	cout << "Nhap a: ";
	cin >> a;

	int b;
	cout << "Nhap b: ";
	cin >> b;

	TriTuyetDoi(a);
	TriTuyetDoi(b);

	cout << "Gia tri tuyet doi: " << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	return 0;
}

void TriTuyetDoi(int& aa)
{
	if (aa < 0)
		aa = -aa;
}