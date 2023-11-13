#include <iostream>
#include <iomanip>

using namespace std;

float LonNhat(int[], int);
void Nhap(float[], int&);
void Xuat(float[], int);

float LonNhat(float a[], int n)
{
	if (n == 1)
		return a[0];
	float lc = LonNhat(a, n - 1);
	if (a[n - 1] > lc)
		lc = a[n - 1];
	return lc;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

void Xuat(float a[], int n)
{
	if (n == 0)
		return;
	Xuat(a, n - 1);
	cout << setw(6) << a[n - 1];
}

int main()
{
	float b[100];
	int k;
	Nhap(b, k);
	float Max = LonNhat(b, k);
	cout << "Gia tri lon nhat trong mang la: " << Max;
	return 1;
}