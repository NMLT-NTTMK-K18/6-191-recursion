#include <iostream>
#include <cmath>
using namespace std;

int TichSoLe(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "T = " << TichSoLe(n);
	return 0;
}

int TichSoLe(int n)
{
	n = abs(n);
	if (n <= 9)
	{
		if (n % 2 != 0)
			return n;
		return 0;
	}
	int t = TichSoLe(n / 10);
	int dv = n % 10;
	if (dv % 2 != 0)
		return t * dv;
	return t;
}