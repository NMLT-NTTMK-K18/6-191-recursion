#include <iostream>
#include <cmath>
using namespace std;

int UocLeLonNhat(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Uoc le lon nhat = " << UocLeLonNhat(n);
	return 0;
}

int UocLeLonNhat(int n)
{
	n = abs(n);
	if (n % 2 != 0)
		return n;
	return UocLeLonNhat(n / 2);
}