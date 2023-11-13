#include <iostream>
using namespace std;

void Nhap(float[][100], int &, int &);
float TongAm(float[][100], int, int);

int main()
{
	float a[100][100];
	int m, n;
	Nhap(a, m, n);

	cout << "Tong cac so am trong ma tran: " << TongAm(a, m, n) << endl;
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

float TongAm(float a[][100], int m, int n)
{
	if (m == 0)
		return 0;
	float s = TongAm(a, m - 1, n);
	for (int j = 0; j < n; j++)
		if (a[m - 1][j] < 0)
			s = s + a[m - 1][j];
	return s;
}