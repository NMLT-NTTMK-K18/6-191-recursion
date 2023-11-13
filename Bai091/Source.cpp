#include <iostream>
#include <iomanip>

using namespace std;

int ChuSoDau(int);
int TongGiaTri(int[], int);
void Nhap(int[], int&);
void Xuat(int[], int);

int TongGiaTri(int a[], int n)
{
	if (n == 0)
		return 0;
	int s = TongGiaTri(a, n - 1);
	if (ChuSoDau(a[n - 1]) % 2 != 0)
		s = s + a[n - 1];
	return s;
}

int ChuSoDau(int n)
{
	n = abs(n);
	if (n <= 9)
		return n;
	return ChuSoDau(n / 10);
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

void Xuat(int a[], int n)
{
	if (n == 0)
		return;
	Xuat(a, n - 1);
	cout << setw(6) << a[n - 1];
}

int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	int kq=TongGiaTri(b, k);
	cout << "Tong cac gia tri co chu so dau tien la chu so le: "<<kq;
	return 1;
}