#include <iostream>
using namespace std;

void Nhap(int[], int &);
bool ktDoiXung(int);
int Dem(int[], int);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	cout << "So luong so doi xung: " << Dem(a, n);
	return 0;
}

void Nhap(int a[], int &n)
{
	cout << "Nhap so phan tu mang: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "] = ";
		cin >> a[i];
	}
}

bool ktDoiXung(int n)
{
	int t = n;
	int dv = 0;
	int dn = 0;
	while (t != 0)
	{
		dv = t % 10;
		dn = dn * 10 + dv;
		t = t / 10;
	}

	if (dn == n)
		return true;
	return false;
}

int Dem(int a[], int n)
{
	if (n == 0)
		return 0;
	int dem = Dem(a, n - 1);
	if (ktDoiXung(a[n - 1]))
		dem++;
	return dem;
}