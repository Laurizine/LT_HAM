#include<iostream>
using namespace std;

void Nhap(float&);
float Chuvi(float);
int main()
{
	float r;
	Nhap(r);
	float kq = Chuvi(r);
	cout << "Chu vi duong tron la: " << kq << endl;
	return 0;
}

void Nhap(float& rr)
{
	cout << "Nhap ban kinh r = ";
	cin >> rr;
}

float Chuvi(float rr)
{
	return 2 * 3.14 * rr;
}