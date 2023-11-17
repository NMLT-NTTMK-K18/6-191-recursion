#include <iostream>
#include <iomanip>

using namespace std;

int DemGiaTri(int[], int);
void Nhap(int[], int&);
void Xuat(int[], int);

int DemGiaTri(int a[], int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
		return 0;
	int dem = DemGiaTri(a, n - 1);
	int flag = 1;
	for (int i = 0; i <= n - 2; i++)
		if (a[i] >= a[n - 1])
			flag = 0;
	if (flag == 1)
		dem++;
	return dem;
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
	cout << "Mang ban dau la: ";
	Xuat(b, k);
	int kq = DemGiaTri(b, k);
	cout << "\nKet qua la: " << kq;
	return 1;
}