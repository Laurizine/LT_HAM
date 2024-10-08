#include<iostream>
using namespace std;

float Hangdonvi(int&);
int main()
{
	int n;
	cout << "nhap n: ";
	cin >> n;
	int kq = Hangdonvi(n);
	cout << "Hang don vi cua " << n << " la " << kq << endl;
	return 0;
}

float Hangdonvi(int& a)
{
	return a % 10;
}