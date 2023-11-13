#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

bool kt_nguyen_to(int);
void Liet_ke(int[], int);

int main()
{
	int a[] = { 8,8,6,5,7,9,0 };
	Liet_ke(a, 7);
	return 0;
}

void Liet_ke(int a[], int n) {
	if (n == 0) {
		return;
	}
	Liet_ke(a, n - 1);
	if (kt_nguyen_to(a[n-1])) {
		cout << a[n - 1] << setw(5);
	}
}

bool kt_nguyen_to(int n) {
	if (n < 2) {
		return false;
	}
	for (int i = 2; i * i <= n; ++i) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}