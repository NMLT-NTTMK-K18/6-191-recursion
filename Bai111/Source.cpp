#include<iostream>
#include<cmath>

using namespace std;

float AmDau(float[], int);

int main()
{
	float a[100];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	float kq = AmDau(a, n);
	cout << kq;
	return 0;
}
float AmDau(float a[], int n)
{
	if (n == 0)
		return 0;
	float lc = AmDau(a, n - 1);
	if (lc != 0)
	{
		return lc;
	}
	if (a[n - 1] < 0)
		return a[n - 1];
	return 0;
}