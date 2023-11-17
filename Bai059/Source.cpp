#include <iostream>
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

	cout << "Tong: " << Tinh(x, n);

	return 0;
}

double Tinh(float x, int n)
{
	if (n == 0)
		return 1 + x;
	if (n == 1)
		return 1 + x + x * x * x / 6;
	double a = Tinh(x, n - 1);
	double b = Tinh(x, n - 2);
	float hs = x * x / (2 * n) / (2 * n + 1);
	return ((1 + hs) * a - hs * b);
}