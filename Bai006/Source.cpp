#include <iostream>
#include <iomanip>
using namespace std;

float Tong(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "\nKet qua cua S(" << n << ") la:	" << setw(5) << setprecision(5) << Tong(n) << endl;
	return 0;
}

float Tong(int n)
{
	if (n == 0)
		return 0;
	return Tong(n - 1) + (float)n / (n + 1);
}