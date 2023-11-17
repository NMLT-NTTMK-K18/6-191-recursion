#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int &);
void DichPhai(int[], int);
void Swap(int &, int &);
void Xuat(int[], int);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	DichPhai(a, n);
	Xuat(a, n);
	return 0;
}

void Nhap(int a[], int &n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

void Swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

void DichPhai(int a[], int n)
{
	if (n == 1)
		return;
	Swap(a[n - 2], a[n - 1]);
	DichPhai(a, n - 1);
}

void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(5) << a[i];
}