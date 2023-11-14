#include <iostream>
using namespace std;
double LuyThua(double, int);

int main()
{
	double x;
	cout << "Nhap x: ";
	cin >> x;

	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "x^n = " << LuyThua(x, n);

	return 0;
}

double LuyThua(double x, int n)
{
	if (n == 0)
		return x;
	double s = LuyThua(x, n - 1);
	return s * x;
}