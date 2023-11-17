#include<iostream>
#include<cmath>

using namespace std;

int ktTang(int[], int);

int main()
{
	int a[100];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int kq = ktTang(a, n);
	cout << kq;
	return 0;
}
int ktTang(int a[], int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	if ((a[n - 2] <= a[n - 1]) && ktTang(a, n - 1) == 1)
	{
		return 1;
	}
	return 0;
}
