#include <iostream>
using namespace std;

float Tinh(float);

int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;

	cout << "Ket qua: " << Tinh(x) << endl;
	return 0;
}

float Tinh(float xx)
{
	float f;
	if (xx >= 5)
		f = xx * xx * xx + 5 * xx;
	else
		f = -2 * xx * xx + 4 * xx - 9;
	return f;
}