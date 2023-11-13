#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
using namespace std;

int dem_prime_pb(int a[], int n);
bool kt_nguyen_to(int x);

int main()
{
	int a[8] = { 1,2,3,4,5,2,3,3 };
	cout << dem_prime_pb(a, 8);
	return 0;
}

int dem_prime_pb(int a[], int n) {
	int dem = 0;
	for (int i = 0; i < n; ++i) {
		if (kt_nguyen_to(a[i])) {
			++dem;
			for (int j = 0; j < i; ++j) {
				if (a[j] == a[i]) {
					--dem;
					break;
				}
			}
		}
	}
	return dem;
}

bool kt_nguyen_to(int x) {
	if (x < 2) {
		return false;
	}
	for (int i = 2; i <= x / 2; ++i) {
		if (x % i == 0) {
			return false;
		}
	}
	return true;
}