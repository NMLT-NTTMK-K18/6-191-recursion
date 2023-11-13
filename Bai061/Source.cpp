#include <iostream>
#include <iomanip>
#include <ctime>
#include <algorithm>
#include <cmath>
using namespace std;

void Input(int[], int &);
void QuickSort(int[], int, int);
void Output(int[], int);

int main()
{
	int a[50000];
	int n;
	Input(a, n);
	QuickSort(a, 0, n - 1);
	Output(a, n);
	return 0;
}

void Input(int a[], int &n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Phan thu thu " << i << " la: ";
		cin >> a[i];
	}
}

void QuickSort(int a[], int l, int r)
{
	if (l >= r)
		return;
	int pivot = a[(l + r) / 2];
	int i = l, j = r;
	while (i <= j)
	{
		while (a[i] < pivot)
			i++;
		while (a[j] > pivot)
			j--;
		if (i <= j)
		{
			swap(a[i], a[j]);
			i++;
			j--;
		}
	}
	QuickSort(a, l, j);
	QuickSort(a, i, r);
}

void Output(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(6) << a[i];
}
