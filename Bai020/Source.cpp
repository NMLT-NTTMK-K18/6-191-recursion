#include <iostream>
#include <cmath>
using namespace std;

float Tong(int);

int main()
{
	float n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "S = " << Tong(n);
	return 0;
}

float Tong(int n)
{
	if (n == 0)
		return 0;
	float s = Tong(n - 1);
	return s + sqrt(1 + (float)1 / n / n + (float)1 / (n + 1) / (n + 1));
}