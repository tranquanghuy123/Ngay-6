// Khai báo thư viện
#include <iostream>
// Khai báo tên
using namespace std;

int main()
{
	// Khai báo biến a, b , c , x1 , x2 có kiểu dữ liệu là sô nguyên
	int a, b, c, x1, x2;
	// Xuất và nhập dữ liệu a, b, c
	cout << "Nhap a = " << endl;
	cin >> a;
	cout << "Nhap b = " << endl;
	cin >> b;
	cout << "Nhap c = " << endl;
	cin >> c;
	int delta = (b * b) - 4 * a * c;
	if (delta < 0) {
		cout << " Phuong trinh vo nghiem " << endl;
	}
	else if (delta == 0) {
		cout << " Phuong trinh co nghiem kep " << endl;
		x1 = x2 = -(b / (2 * a));
		cout << " x1 = x2 = " << x1 << endl;
	}
	else if (delta > 0) {
		cout << " Phuong trinh co 2 nghiem phan biet " << endl;
		x1 = (-b + sqrt(delta)) / (2 * a);
		x2 = (-b - sqrt(delta)) / (2 * a);
		cout << " x1 = " << x1 << " va " << " x2 = " << x2 << endl;
	}
	return 0;
}