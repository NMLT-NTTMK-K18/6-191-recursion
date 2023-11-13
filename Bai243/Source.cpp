#include <iostream>
using namespace std;
void Nhap(float[][500], int, int);
float LonNhatDong(float[][500], int, int, int);

int main()
{
	float a[500][500];
	int m, n, d;
	cin >> m >> n >> d;
	Nhap(a, m, n);
	cout << LonNhatDong(a, m, n, d);
	return 0;
}

void Nhap(float a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
}

float LonNhatDong(float a[][500], int m, int n, int d)
{
	if (m == 0)
		return;
	float max = LonNhatDong(a, m, n - 1, d);
	if (a[d][n - 1] > max)
		max = a[d][n - 1];
	return max;
}