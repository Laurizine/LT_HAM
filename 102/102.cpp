#include <iostream>
using namespace std;

float TinhS();

int main()
{
	cout << "S = " << TinhS() << endl;
	return 0;
}

float TinhS()
{
	float s = 0;
	float e = 1;
	int i = 2;
	while (e >= pow(10, -6))
	{
		e = (float)1 / i;
		s = s + e;
		i += 2;
	}
	return s;
}