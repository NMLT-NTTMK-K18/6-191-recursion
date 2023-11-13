#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

float Dem_so_le(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "\nKet qua cua S(" << n << ") la:	" << setw(5) << setprecision(5) << Dem_so_le(n) << endl;
	return 0;
}

float Dem_so_le(int n) {
	n = abs(n);
	if (n <= 9) {
		if (n % 2 == 1) {
			return 1;
		}
		return 0;
	}
	int dv = n % 10;
	if (dv % 2 == 1) {
		return Dem_so_le(n / 10) + 1;
	}
	return Dem_so_le(n / 10);
}