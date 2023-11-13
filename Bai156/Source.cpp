#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
using namespace std;

void xap_nguyen_to_tang(int a[], int n);
bool kt_nguyen_to(int x);

int main()
{
	int a[8] = { 4,3,2,6,7,9,8,5};
	xap_nguyen_to_tang(a, 8);
	for (int i = 0; i < 8; ++i) {
		cout << a[i] << " ";
	}
	return 0;
}

void xap_nguyen_to_tang(int a[], int n) {
	if (n == 1) {
		return;
	}
	for (int i = 0; i <= n - 2; ++i) {
		if (kt_nguyen_to(a[n - 1]) && kt_nguyen_to(a[i]) && a[i] > a[n - 1]) {
			swap(a[i], a[n - 1]);
		}
	}
	xap_nguyen_to_tang(a, n - 1);
}

bool kt_nguyen_to(int x) {
	if (x < 2) {
		return false;
	}
	for (int i = 2; i<=x/2; ++i) {
		if (x % i == 0) {
			return false;
		}
	}
	return true;
}