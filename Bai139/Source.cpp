#include <iostream>
#include <cmath>
using namespace std;

void Nhap(int[], int &);
int bcnn(int, int);
int BCNN(int[], int);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	cout << "Boi chung nho nhat: " << BCNN(a, n);
	return 0;
}

void Nhap(int a[], int &n)
{
	cout << "Nhap so phan tu cua mang: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "] = ";
		cin >> a[i];
	}
}

int bcnn(int a, int b)
{
	int m = abs(a);
	int n = abs(b);
	while (m * n != 0)
		if (m > n)
			m = m - n;
		else
			n = n - m;
	return (abs(a * b) / (m + n));
}

int BCNN(int a[], int n)
{
	if (n == 1)
		return a[0];
	int lc = BCNN(a, n - 1);
	lc = bcnn(lc, a[n - 1]);
	return lc;
}
