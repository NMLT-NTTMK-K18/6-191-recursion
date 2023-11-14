#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

float Tinh(float, int);

int main()
{
	int n;
	float x;
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap n: ";
	cin >> n;

	cout << "\nKet qua cua S(" << n << ") la:	" << setw(5) << Tinh(x, n) << endl;
	return 0;
}

float Tinh(float x, int n)
{
	if (n == 0)
	{
		return 0;
	}
	if (n == 1)
	{
		return x;
	}
	float a = Tinh(x, n - 1);
	float b = Tinh(x, n - 2);
	return ((1 + x/n) * a - x/n * b);
}