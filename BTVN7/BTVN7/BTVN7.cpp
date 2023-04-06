#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << " Nhap chuoi ky tu " << endl;
	string str;
	cin >> str;

	reverse(str.begin(), str.end());

	cout <<" Chuoi viet nguoc :" << str << endl;
}