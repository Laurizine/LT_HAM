#include<iostream>
#include<cmath>
using namespace std;

void Nhap(float&);
float Tinhvaxuat(float);
int main()
{
	float r;
	Nhap(r);
	float kq = Tinhvaxuat(r);
	cout << "The tich cau la: " << kq << endl;
	return 0;
}

void Nhap(float& bankinh)
{
	cout << "Nhap ban kinh r: ";
	cin >> bankinh;
}

float Tinhvaxuat(float bankinhr)
{
	return 3, 14 * bankinhr * bankinhr * bankinhr;
}