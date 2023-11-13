#include <iostream>
using namespace std;

int TongChuSo(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "\n Tong Sn= " << TongChuSo(n);
	return 0;
}

int TongChuSo(int n)
{
	n = abs(n);
	if (n == 0)
		return 0;
	int s=TongChuSo(n / 10);
	int dv = n % 10;
	return(s + dv);
}