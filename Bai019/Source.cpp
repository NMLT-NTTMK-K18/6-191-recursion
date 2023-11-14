#include <iostream>
#include <cmath>
using namespace std;
double Tong(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "Tong S: " << Tong(n);
	return 0;
}

double Tong(int n)
{
	if (n == 0)
		return 0;
	double s = Tong(n - 1);
	return s + ((float)1 / ((n + 1) * sqrt(n) + n * sqrt(n + 1)));
}