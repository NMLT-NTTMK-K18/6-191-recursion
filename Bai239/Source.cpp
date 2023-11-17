#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void Nhap(float[][100], int &, int &);
int Max(float[][100], int, int);

int main()
{
	float a[100][100];
	int m, n;
	Nhap(a, m, n);
	cout << "So lon nhat: " << Max(a, m, n);
	return 0;
}

void Nhap(float a[][100], int &m, int &n)
{
	cout << "Nhap so hang: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap a[" << i << "][" << j << "] : ";
			cin >> a[i][j];
		}
}

int Max(float a[][100], int m, int n)
{
	if (m == 1)
	{
		int lc = a[0][0];
		for (int j = 0; j < n; j++)
			if (a[0][j] > lc)
				lc = a[0][j];
		return lc;
	}

	float lc = Max(a, m - 1, n);
	for (int j = 0; j < n; j++)
		if (a[m - 1][j] > lc)
			lc = a[m - 1][j];
	return lc;
}