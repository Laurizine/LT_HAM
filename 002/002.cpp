#include<iostream>
using namespace std;

void Nhap(float& );
float Xuatdientich(float);

int main()
{
	float r;
	Nhap(r);
	float kq = Xuatdientich(r);
	cout << "Dien tich duong tron la: " << kq << endl;
	return 0;
}
//
void Nhap(float& rr)
{
	cout << "Nhap ban kinh r = ";
	cin >> rr;
}
//
float Xuatdientich(float rr)
{
	return 3.14 * rr * rr;
}