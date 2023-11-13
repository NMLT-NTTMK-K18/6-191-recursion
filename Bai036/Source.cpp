#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int DemSoLe(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "\nKet qua cua S(" << n << ") la:	" << setw(5) << setprecision(5) << DemSoLe(n) << endl;
	return 0;
}

int DemSoLe(int n)
{
	n = abs(n);
	if (n <= 9)
	{
		if (n % 2 != 0)
			return 1;
		return 0;
	}
	int dem = DemSoLe(n / 10);
	int dv = n % 10;
	if (dv % 2 != 0)
		return dem + 1;
	return dem;
}