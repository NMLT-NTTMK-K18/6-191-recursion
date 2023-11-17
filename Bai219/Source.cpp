#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[][100], int &, int &);
int Tich(int[][100], int, int, int);

int main()
{
	int a[100][100];
	int m, n;
	Nhap(a, m, n);
	int c;
	cout << "Nhap cot muon tinh: ";
	cin >> c;
	cout << "Tich cac so chan: " << Tich(a, m, n, c);
	return 0;
}

void Nhap(int a[][100], int &m, int &n)
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

int Tich(int a[][100], int m, int n, int c)
{
	if (m == 0)
		return 1;
	int s = Tich(a, m - 1, n, c);
	if (a[m - 1][c] % 2 == 0)
		s = s * a[m - 1][c];
	return s;
}