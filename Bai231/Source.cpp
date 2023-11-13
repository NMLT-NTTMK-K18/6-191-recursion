#include <iostream>
using namespace std;

void Nhap(float[][100], int &, int &);
int TanSuat(float[][100], int, int, float);

int main()
{
	int m, n;
	float a[100][100];
	Nhap(a, m, n);

	float x;
	cout << "Nhap so x:";
	cin >> x;

	cout << "So lan xuat hien cua " << x << " trong ma tran: " << TanSuat(a, m, n, x) << endl;

	return 0;
}

void Nhap(float a[][100], int &m, int &n)
{
	cout << "Nhap so dong: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	for (int i = 0; i < m; ++i)
		for (int j = 0; j < n; ++j)
		{
			cout << "Nhap a[" << i << "][" << j << "]: ";
			cin >> a[i][j];
		}
}

int TanSuat(float a[][100], int m, int n, float x)
{
	if (m == 0)
		return 0;
	int dem = TanSuat(a, m - 1, n, x);
	for (int j = 0; j < n; j++)
		if (a[m - 1][j] == x)
			dem = dem + 1;
	return dem;
}