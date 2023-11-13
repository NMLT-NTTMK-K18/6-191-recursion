#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void Tim_doan(int[], int, int&, int&);

int main()
{
	int a[] = { 8,-8,9,6,-5,7,9,0 };
	int x = a[0], y = a[0];
	Tim_doan(a, 8, x, y);
	cout << x << " " << y;
	return 0;
}

void Tim_doan(int a[], int n, int& x, int& y) {
	if (n == 1) {
		x = a[0];
		y = a[0];
		return;
	}
	Tim_doan(a, n - 1, x, y);
	if (a[n - 1] < x) {
		x = a[n - 1];
	}
	if (a[n - 1] > y) {
		y = a[n - 1];
	}
}