#include <iostream>
using namespace std;

int ChanCuoi(int[], int);

int main()
{
	int n;
	int a[100];
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	cout << "Chan cuoi: " << ChanCuoi(a, n);
	return 0;
}

int ChanCuoi(int a[], int n)
{
	if (n == 0)
		return -1;
	if (a[n - 1] % 2 == 0)
		return a[n - 1];
	return ChanCuoi(a, n - 1);
}