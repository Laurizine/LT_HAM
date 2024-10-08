#include<iostream>
#include<cmath>
using namespace std;
//khai bao ham nhap, có the viet cau lenh khai bao o ham main nhung toi thich khai bao thanh 1 ham rieng hihi!!!!!!!!!!!!!!!!!!!!!!!!1
void Nhap(float&);//khong co gia tri tra ve nen dung void nhe
float Tinhvaxuat(float);
int main()
{
	float r;
	Nhap(r);
	float s = Tinhvaxuat(r);
	cout << "Dien tich xung quanh la:" << s << endl;
	return 0;
}

void Nhap(float& bankinh)
{
	cout << "Nhap ban kinh r: ";
	cin >> bankinh;
}
float Tinhvaxuat(float rr)
{
	return 4 * 3.14 * rr * rr;
}