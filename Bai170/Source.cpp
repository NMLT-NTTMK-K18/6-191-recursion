#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
int DemConTang(float[], int);

int main()
{
	int n;
	float a[100];
	Nhap(a, n);
	cout << DemConTang(a, n);
	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

void DemConTang(float a[], int n)
{
	if (n == 1)
		return;
	for (int i = 0; i <= n - 2; i++)
	{
		if (a[i] > 0 && a[n - 1] > 0 && a[i] > a[n - 1])
			swap(a[i], a[n - 1]);
		if (a[i] < 0 && a[n - 1] < 0 && a[i] < a[n - 1])
			swap(a[i], a[n - 1]);
	}
	DuongTangAmGiam(a, n - 1);
}