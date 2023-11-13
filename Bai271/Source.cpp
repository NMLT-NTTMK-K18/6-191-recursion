#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[][100], int &, int &);
void Xuat(float[][100], int, int);
void SapDongGiam(float[][100], int, int, int);

int main()
{
	int m, n;
	float a[100][100];
	Nhap(a, m, n);

	int d;
	cout << "Nhap dong can xep giam dan trai sang phai: ";
	cin >> d;

	SapDongGiam(a, m, n, d);

	cout << "Mang sau khi sap dong " << d << " giam dan trai sang phai: " << endl;
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

void SapDongGiam(float a[][100], int m, int n, int d)
{
	if (n == 1)
		return;
	for (int j = 0; j <= n - 2; j++)
		if (a[d][j] < a[d][n - 1])
			swap(a[d][j], a[d][n - 1]);
	SapDongGiam(a, m, n - 1, d);
}