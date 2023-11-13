#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
int TongGiaTri(int[], int);

int main()
{
	int* a = new int[100];
	int n;
	Nhap(a, n);
	int kq = TongGiaTri(a, n);
	cout << "Tong la: " << kq;
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

int TongGiaTri(int a[], int n)
{
	if (n == 0)
		return 0;
	int s = TongGiaTri(a, n - 1);
	if ((abs(a[n - 1]) / 10) % 10 == 5)
		s = s + a[n - 1];
	return s;
}