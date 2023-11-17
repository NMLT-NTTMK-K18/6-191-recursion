#include <iostream>
#include <iomanip>
using namespace std;

int ChuSoDau(int);
void Nhap(int[], int &);
void LietKe(int[], int);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	LietKe(a, n);
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

int ChuSoDau(int n)
{
	if (n <= 9)
		return n;
	return ChuSoDau(n / 10);
}

void LietKe(int a[], int n)
{
	if (n == 0)
		return;
	LietKe(a, n - 1);
	if (ChuSoDau(a[n - 1]) % 2 == 0)
		cout << setw(5) << a[n - 1];
}