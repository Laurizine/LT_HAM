#include<iostream>
using namespace std;

void Hoanvi(int&, int&); // Đổi kiểu trả về thành void

int main()
{
    int a, b;
    cout << "Nhap hai so a va b" << endl;
    cout << "Nhap a: " << endl;
    cin >> a;
    cout << "Nhap b: " << endl;
    cin >> b;
    Hoanvi(a, b); // Gọi hàm mà không mong đợi giá trị trả về
    cout << "Hoan vi cua hai so la: " << a << " va " << b << endl;
    return 0;
}

 