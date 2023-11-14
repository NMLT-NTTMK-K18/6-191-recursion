#include <iostream>
#include <cmath>
using namespace std;
float Tinh(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "an = " << Tinh(n);
	return 0;
}

float Tinh(int n)
{
	if (n == 1)
		return 2;
	float s = Tinh(n - 1);
	return 5 * s + sqrt(24 * s * s - 8);
}