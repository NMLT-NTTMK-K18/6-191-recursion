#include <iostream>
using namespace std;

void Nhap(int[], int &);
bool ktNguyenTo(int);
int NguyenToFirst(int[], int);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	int kq = NguyenToFirst(a, n);
	if (kq == 0)
		cout << "khong co so nguyen to";
	else
		cout << "So nguyen to dau tien la: " << kq;
	return 0;
}

void Nhap(int a[], int &n)
{
	cout << "Nhap so phan tu cua mang: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "] : ";
		cin >> a[i];
	}
}

bool ktNguyenTo(int n)
{
	int dem = 0;
	for (int i = 1; i <= n; i++)
		if (n % i == 0)
			dem++;
	if (dem == 2)
		return true;
	return false;
}

int NguyenToFirst(int a[], int n)
{
	if (n == 0)
		return 0;
	int lc = NguyenToFirst(a, n - 1);
	if (lc != 0)
		return lc;
	if (ktNguyenTo(a[n - 1]))
		return a[n - 1];
	return 0;
}