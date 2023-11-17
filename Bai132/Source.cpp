#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int Tim_min(int[], int);

int main()
{
	int a[] = { 8,-8,9,6,-5,7,9,0 };
	int x = -8, y = 5;
	cout << Tim_min(a, 8);
	return 0;
}

int Tim_min(int a[], int n) {
	if (n == 1) {
		if (kt_hoan_thien(a[0])) {
			return a[0];
		}
		return -1;
	}
	int lc = Tim_min(a, n - 1);
	if (!kt_hoan_thien(a[n - 1])) {
		return lc;
	}
	if (kt_hoan_thien(a[n - 1]) && lc == -1) {
		return a[n - 1];
	}
	if (kt_hoan_thien(a[n - 1]) && a[n - 1] < lc) {
		lc = a[n - 1];
	}
	return lc;
}

bool kt_hoan_thien(int n)
{
	int s = 0;
	for (int i = 1; i < n; i++)
		if (n % i == 0)
			s += i;

	if (s == n)
		return true;
	return false;
}