#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[][100], int &, int &);
void Xuat(float[][100], int, int);
void ThemDong(float[][100], int &, int, int);

int main()
{
	float a[100][100];
	int m, n;
	Nhap(a, m, n);
	int d;
	cout << "Nhap cot muon them: ";
	cin >> d;

	ThemDong(a, m, n, d);
	Xuat(a, m, n);

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

void Xuat(float a[][100], int m, int n)
{
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
			cout << setw(10) << a[i][j];
		cout << endl;
	}
}

void ThemDong(float a[][100], int &m, int n, int d)
{
	if (n == 0)
	{
		m++;
		return;
	}
	ThemDong(a, m, n - 1, d);
	for (int i = m; i > d; i--)
		a[i][n - 1] = a[i - 1][n - 1];
	a[d][n - 1] = 1;
}