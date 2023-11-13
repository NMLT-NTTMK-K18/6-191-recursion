#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void Nhap(int[][500], int, int);
bool ktDang5m(int);
void LietKe(int[][500], int, int, int);
int main()
{
	int a[500][500];
	int m, n, d;
	cin >> m >> n >> d;
	Nhap(a, m, n);
	LietKe(a, m, n, d);
	return 0;
}

void Nhap(int a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
}

bool ktDang5m(int n)
{
	for (int i = 0; i <= n; i++)
		if (pow(5, i) == n)
			return true;
	return false;
}

void LietKe(int a[][500], int m, int n, int d)
{
	if (m == 0)
		return;
	LietKe(a, m, n - 1, d);
	if (ktDang5m(a[m - 1][d]))
		cout << setw(4) << a[m - 1][d];
}