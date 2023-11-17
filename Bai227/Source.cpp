#include <iostream>
using namespace std;

void Nhap(int[][100], int&, int&);
bool ktDang2m(int);
int DemChan(int[][100], int, int);

int main()
{
	int m, n, a[100][100];
	Nhap(a, m, n);
	cout << "So luong gia tri chan la:" << DemChan(a, m, n);
	return 0;
}

void Nhap(int a[][100], int& m, int& n)
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

int DemChan(int a[][100], int m, int n)
{
	if (m == 0)
		return 0;
	int dem = DemChan(a, m - 1, n);
	for (int j = 0; j < n; j++)
		if (a[m - 1][j] % 2 == 0)
			dem++;
	return dem;
}