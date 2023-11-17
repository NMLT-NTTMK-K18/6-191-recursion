#include <iostream>
#include <cmath>
using namespace std;

double Tinh(float, int);

int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;

	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "Tong S: " << Tinh(x, n);
	return 0;
}

double Tinh(float x, int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
		return x * x;
	double a = Tinh(x, n - 1);
	double b = Tinh(x, n - 2);
	return ((1 + x * x) * a - x * x * b);
}