#include <iostream>
using namespace std;

void Nhap(float[][100], int&, int&);
int DemAm(float[][100], int, int, int);

int main()
{
	int m, n, c;
	float a[100][100];
	Nhap(a, m, n);
	cout << "Nhap c: ";
	cin >> c;
	cout << DemAm(a, m, n, c);
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

int DemAm(float a[][100], int m, int n, int c)
{
	if (m == 0)
		return 0;
	int dem = DemAm(a, m - 1, n, c);
	if (a[m - 1][c] < 0)
		dem = dem + 1;
	return dem;
}