#include <iostream>

using namespace std;

float Tinh(float, int);

float Tinh(float x, int n)
{
	if (n == 0)
		return 1;
	if (n == 1)
		return 1 + x * x / 2;
	float a = Tinh(x, n - 1);
	float b = Tinh(x, n - 2);
	float hs = x * x / (2 * n - 1) / (2 * n);
	return ((1 + hs) * a - hs * b);
}

int main()
{
	float y;
	cout << "Nhap x: ";
	cin >> y;

	int k;
	cout << "Nhap n: ";
	cin >> k;

	float kq = Tinh(y, k);
	cout << "Ket qua la: " << kq;
	return 0;
}