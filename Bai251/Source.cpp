#include <iostream>
using namespace std;

void Nhap(float[][100], int &, int &);
float TongCot(float[][100], int, int, int);
float TongNhoNhat(float[][100], int, int);

int main()
{
	int m, n;
	float a[100][100];
	Nhap(a, m, n);

	cout << "Tong của cot nho nhat trong cac cot la: " << TongNhoNhat(a, m, n) << endl;

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

float TongCot(float a[][100], int m, int n, int c)
{
	if (m == 0)
		return 0;
	return TongCot(a, m - 1, n, c) + a[m - 1][c];
}

float TongNhoNhat(float a[][100], int m, int n)
{
	if (n == 1)
		return TongCot(a, m, n, 0);
	float lc = TongNhoNhat(a, m, n - 1);
	if (TongCot(a, m, n, n - 1) > lc)
		lc = TongCot(a, m, n, n - 1);
	return lc;
}