#include<iostream>
using namespace std;

float Dientich(int ,float);
int main()
{
	int n;
	float  r;
	cout << "Nhap so canh n= ";
	cin >> n;
	cout << "Nhap ban kinh = ";
	cin >> r;
	cout << "Dien tich la: " << Dientich(n, r);
	return 0;
}

float Dientich(int nn,float rr)
{
	return 0.5 * nn * rr * rr * sin((float)2 * 3.14 / nn);
}