#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int &);
void Swap(int &, int &);
void Xuat(int[], int);
void ChanTangLeTang(int[], int);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	ChanTangLeTang(a, n);
	Xuat(a, n);
	return 0;
}

void Nhap(int a[], int &n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "] = ";
		cin >> a[i];
	}
}

void Swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(4) << a[i];
}

void ChanTangLeTang(int a[], int n)
{
	if (n == 1)
		return;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0 && a[n - 1] % 2 == 0 && a[i] > a[n - 1])
			Swap(a[i], a[n - 1]);
		if (a[i] % 2 != 0 && a[n - 1] % 2 != 0 && a[i] > a[n - 1])
			Swap(a[i], a[n - 1]);
	}
	ChanTangLeTang(a, n - 1);
}