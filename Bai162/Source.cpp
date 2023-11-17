#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
using namespace std;

void Xoa_vt(int a[], int& n, int vt);
void Xoa_am(int a[], int& n);
void Xoa_am(int a[], int& n, int index);

int main()
{
	int a[8] = { -4,3,2,-6,-7,9,8,-5 };
	int n = 8;
	Xoa_am(a, n,0);
	for (int i = 0; i < n; ++i) {
		cout << a[i] << " ";
	}
	return 0;
}

void Xoa_am(int a[], int& n, int index) {
	if (index == n) {
		return;
	}
	if (a[index] < 0) {
		Xoa_vt(a, n, index);
	}
	else {
		index++;
	}
	Xoa_am(a, n, index);
}

void Xoa_am(int a[], int& n) {
	int i = 0;
	while (i < n) {
		if (a[i] < 0) 
			Xoa_vt(a, n, i);
		else
		 ++i;
	}
}

void Xoa_vt(int a[], int& n, int vt) {
	if (vt == n - 1) {
		n--;
		return;
	}
	a[vt] = a[vt + 1];
	Xoa_vt(a, n, vt + 1);
}