#include<iostream>
#include<cmath>

using namespace std;

int TimGiaTri(int[], int);
bool ktDang2m(int);

int main()
{
	int a[100];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int kq = TimGiaTri(a, n);
	cout << kq;
	return 0;
}
int TimGiaTri(int a[], int n)
{
	if (n == 0)
		return 0;
	int lc = TimGiaTri(a, n - 1);
	if (lc != 0)
		return lc;
	if (ktDang2m(a[n - 1]))
		return a[n - 1];
	return 0;
}
bool ktDang2m(int n)
{
	if (n < 1)
		return false;
	bool flag = true;
	for (int i = n; i != 0; i = i / 2)
	{
		if (i % 2 != 0)
			flag = false;
	}
	return flag;
}