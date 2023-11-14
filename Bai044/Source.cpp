#include <iostream>
using namespace std;
int ktGiam(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	if (ktGiam(n))
		cout << "Giam dan tu trai sang phai";
	else
		cout << "Khong giam dan tu trai sang phai";
	return 0;
}

int ktGiam(int n)
{
	if (n <= 9)
		return 1;
	int dv = n % 10;
	int hc = (n % 100) / 10;
	if (ktGiam(n / 10) && hc >= dv)
		return 1;
	return 0;
}