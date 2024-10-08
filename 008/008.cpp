#include<iostream>
#include<cmath>
using namespace std;

void Nhap(int&, float&);
float Chuvi(float,float);
int main()
{
	int  r;
	float n;
	Nhap(r, n);
	float kq = Chuvi(r, n);
	cout << "Chu vi la: " << kq << endl;
	return 0;
}

void Nhap(int& canh,float& bankinh)
{
	cout << "Nhap canh: ";
	cin >> canh;
	cout << "Nhap ban kinh: ";
	cin >> bankinh;
}

float Chuvi(float nn,float rr)
{
	float P = 2 * nn * rr * sin((float)3.14 / nn);
	return P;
}