#include <iostream>
using namespace std;

void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
void SapCotTang(float[][100], int, int, int);
void SapCotGiam(float[][100], int, int, int);
void SapXep(float[][100], int, int);

int main()
{
	int m, n;
	float a[100][100];
	Nhap(a, m, n);
	SapXep(a, m, n);
	Xuat(a, m, n);
	return 0;
}

void Nhap(float a[][100], int& m, int& n)
{
	cout << "Nhap m: ";
	cin >> m;
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
}

void Xuat(float a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
}

void SapCotTang(float a[][100], int m, int n, int c)
{
	if (m == 1)
		return;
	for (int i = 0; i <= m - 2; i++)
		if (a[i][c] > a[m - 1][c])
			swap(a[i][c], a[m - 1][c]);
	SapCotTang(a, m - 1, n, c);
}

void SapCotGiam(float a[][100], int m, int n, int c)
{
	if (m == 1)
		return;
	for (int i = 0; i <= m - 2; i++)
		if (a[i][c] < a[m - 1][c])
			swap(a[i][c], a[m - 1][c]);
	SapCotGiam(a, m - 1, n, c);
}

void SapXep(float a[][100], int m, int n)
{
	if (n == 1)
		return;
	if ((n - 1) % 2 == 0)
		SapCotGiam(a, m, n, n - 1);
	else
		SapCotTang(a, m, n, n - 1);
	SapXep(a, m, n - 1);
}