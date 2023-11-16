#include <iostream>
using namespace std;

void Nhap(int[][100], int&, int&);
int DaoNguoc(int);
bool ktDoiXung(int);
int TongDong(int[][100], int, int, int);

int main()
{
	int m, n, d;
	int a[100][100];
	Nhap(a, m, n);
	cout << "Nhap d: ";
	cin >> d;
	cout << TongDong(a, m, n, d);
	return 0;
}

void Nhap(int a[][100], int& m, int& n)
{
	cout << "Nhap m: ";
	cin >> m;
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
}

int DaoNguoc(int k)
{
	if (k == 0)
		return 0;
	return (k % 10) * pow(10, floor(log10(k))) + DaoNguoc(k / 10);
}

bool ktDoiXung(int k)
{
	if (DaoNguoc(k) == k)
		return 1;
	return 0;
}

int TongDong(int a[][100], int m, int n, int d)
{
	if (n == 0)
		return 0;
	int s = TongDong(a, m, n - 1, d);
	if (ktDoiXung(a[d][n - 1]))
		s = s + a[d][n - 1];
	return s;
}