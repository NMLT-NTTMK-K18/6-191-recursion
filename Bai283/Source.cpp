#include <iostream>
using namespace std;

void Nhap(float[][500], int, int);
void Xuat(float[][500], int, int);
float TongCot(float[][500], int, int, int);
void ThemDong(float[][500], int &, int);

int main()
{
	float a[500][500];
	int m, n, c;
	cin >> m >> n >> c;
	Nhap(a, m, n);
	ThemDong(a, m, n);
	Xuat(a, m, n);
	return 0;
}

void Nhap(float a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
}

void Xuat(float a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
}

float TongCot(float a[][500], int m, int n, int c)
{
	if (m == 0)
		return 0;
	return TongCot(a, m - 1, n, c) + a[m - 1][c];
}

void ThemDong(float a[][500], int &m, int n)
{
	if (n == 0)
	{
		m++;
		return;
	}
	ThemDong(a, m, n - 1);
	a[m - 1][n - 1] = TongCot(a, m - 1, n, n - 1);
}