#include <iostream>
using namespace std;

void Nhap(float[], int &);
float Min(float[], int);

int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	cout << "Gia tri nho nhat trong mang: " << Min(a, n);
	return 0;
}

void Nhap(float a[], int &n)
{
	cout << "Nhap so phan tu mang: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "] = ";
		cin >> a[i];
	}
}

float Min(float a[], int n)
{
	if (n == 1)
		return a[0];
	float lc = Min(a, n - 1);
	if (lc > a[n - 1])
		lc = a[n - 1];
	return lc;
}