#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void ViTriLeTang(int[], int);

int main()
{
	int n;
	int a[100];
	Nhap(a, n);
	ViTriLeTang(a, n);
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

void ViTriLeTang(int a[], int n)
{
	if (n == 1)
		return;
	for (int i = 0; i <= n - 2; i++)
		if (i % 2 != 0 && (n - 1) % 2 != 0 && a[i] > a[n - 1])
			swap(a[i], a[n - 1]);
	ViTriLeTang(a, n - 1);
}