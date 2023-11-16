#include <iostream>
using namespace std;

long double Tinh(long double, int);

int main()
{
	long double x;
	cout << "Nhap x: ";
	cin >> x;
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "S = " << Tinh(x, n);
	return 0;
}

long double Tinh(long double x, int n)
{
	if (n == 0)
		return x;
	if (n == 1)
		return x + x * x * x;
	long double a = Tinh(x, n - 1);
	long double b = Tinh(x, n - 2);
	return (1 + x * x) * a - x * x * b;
}