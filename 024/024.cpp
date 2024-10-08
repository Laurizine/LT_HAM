#include<iostream>
using namespace std;

float Hangtram(int&);
int main()
{
	int n;
	cout << "nhap n: ";
	cin >> n;
	int kq = Hangtram(n);
	cout << "Hang tramcua " << n << " la " << kq << endl;
	return 0;
}

float Hangtram(int& a)
{
	return (a % 1000) / 100;
}