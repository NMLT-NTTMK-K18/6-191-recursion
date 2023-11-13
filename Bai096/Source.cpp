#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int Liet_ke(int[], int);

int main()
{
	int a[] = { 8,-8,6,-5,7,9,0 };
	cout<<Liet_ke(a, 7);
	return 0;
}

int Liet_ke(int a[], int n) {
	if (n == 0) {
		return 0;
	}
	int dem = Liet_ke(a, n - 1);
	if (a[n-1]>0&&a[n-1]%7==0) {
		return dem + 1;
	}
	return dem;
}
