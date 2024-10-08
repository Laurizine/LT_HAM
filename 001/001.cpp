#include<iostream>
#include<cmath>;
using namespace std;

//khai bao ham
void Nhap(float&, float&);// Ham Nhap khong co gia tri tra ve, co 2 tham so dau vao deu kieu float va la tham bien

float Khoangcach(float, float, float, float);// Ham khoang cach nay co tra ve khoang cach cua 2 diem nen ta khai bao kieu tra ve, co 4 tham so dau vao va tat ca deu la tham tri

void Xuat(float, float);// ham xuat khong co gia tri tra ve, co 2 tham so dau vao kieu float va deu la tham tri

//ham main
int main()
{
	float x1, y1;
	Nhap(x1, y1);
	float x2, y2;
	Nhap(x2, y2);
	cout << "Diem thu nhat:	" << endl; 
	Xuat(x1, y1);
	cout << "Diem thu hai: " << endl;
	Xuat(x2, y2);
	float kc = Khoangcach(x1, y1, x2, y2);
	cout << "Khoang cach can tim la: " << kc << endl;
	return 0;
}

//Dinh nghia ham nhap, (phai khai bao 2 tham so la xx va yy kieu float va la tham bien)
void Nhap(float&xx, float&yy)
{ 
	cout << "Nhap tung do x: ";
	cin >> xx;
	cout << "Nhap hoanh do y: ";
	cin >> yy;
}
// Dinh nghia ham Khoangcach
float Khoangcach(float x1, float y1, float x2, float y2)
{
	return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}
// Dinh nghia ham Xuat
void Xuat (float xx, float yy)
{
	cout << "Hoanh do la: " << xx << endl;
	cout << "Tung do la: " << yy << endl;
}