#include <iostream>
using namespace std;

void Nhap(float[][500], int, int);
float TichCot(float[][500], int, int);

int main()
{
	float a[500][500];
	int m, n, d;
	cin >> m >> n >> d;
	Nhap(a, m, n);
	cout << TichCot(a, m, n, d);
	return 0;
}

void Nhap(float a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
}

float TichCot(float a[][500], int m, int n, int d)
{
	if (m == 0)
		return;
	float t = TichCot(a, m - 1, n, d);
	if (a[m - 1][d] > 0)
		t += a[m - 1][d];
	return t;
}