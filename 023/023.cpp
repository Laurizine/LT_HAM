#include<iostream>
using namespace std;

float Hangchuc(int&);
int main()
{
	int n;
	cout << "nhap n: ";
	cin >> n;
	int kq = Hangchuc(n);
	cout << "Hang chuc cua " << n << " la " << kq << endl;
	return 0;
}

float Hangchuc(int& a)
{
	return (a % 100)/10;// a %100 la lay tu phai qua trai 2 con so tuong ung voi hang chuc, cân /10 de lay duy nhat so hang chuc(chia lay phan nguyen)!!!!
}