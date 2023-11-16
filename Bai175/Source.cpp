#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void MotVeDau(int[], int);

int main()
{
	int n;
	int a[100];
	Nhap(a, n);
	MotVeDau(a, n);
	Xuat(a, n);
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << setw(10);
}

void MotVeDau(int a[], int n)
{
	if (n == 0)
		return;
	if (a[n - 1] != 1)
	{
		MotVeDau(a, n - 1);
		return;
	}
	for (int i = 0; i <= n - 2; i++)
		if (a[i] != 1)
		{
			swap(a[n - 1], a[i]);
			break;
		}
	MotVeDau(a, n - 1);
}