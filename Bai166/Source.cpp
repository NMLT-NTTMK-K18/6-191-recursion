#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void XuatCon(int[], int, int, int);
void XuatCon(int[], int, int);
void XuatCon(int[], int);

int main()
{
	int* a = new int[100];
	int n;
	Nhap(a, n);
	XuatCon(a, n);
	delete[]a;
	return 1;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap so luong phan tu trong mang: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Phan tu a[" << i << "] = ";
		cin >> a[i];
	}
}

void XuatCon(int a[], int n, int vt, int l)
{
	if (l == 0)
		return;
	XuatCon(a, n, vt, l - 1);
	cout << setw(4) << a[vt + l - 1];
}

void XuatCon(int a[], int n, int l)
{
	if (n < l)
		return;
	XuatCon(a, n - 1, l);
	XuatCon(a, n, n - l, l);
}

void XuatCon(int a[], int n)
{
	if (n == 0)
		return;
	XuatCon(a, n - 1);
	for (int l = 2; l <= n; l++)
	{
		cout << "Mang con co " << l <<  " phan tu la: ";
		XuatCon(a, n, n - l, l);
		cout << endl;
	}
}
