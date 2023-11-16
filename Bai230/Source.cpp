#include <iostream>
using namespace std;

void Nhap(int[][100], int&, int&);
bool ktDang2m(int);
int DemDang2m(int[][100], int, int);

int main()
{
	int m, n;
	int a[100][100];
	Nhap(a, m, n);
	cout << DemDang2m(a, m, n);
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

bool ktDang2m(int k)
{
	static bool flag = 1;
	if (k == 0)
		return flag;
	if (k % 2 != 0)
		flag = 0;
	ktDang2m(k / 2);
}

int DemDang2m(int a[][100], int m, int n)
{
	if (m == 0)
		return 0;
	int dem = DemDang2m(a, m - 1, n);
	for (int j = 0; j < n; j++)
		if (ktDang2m(a[m - 1][j]))
			dem = dem + 1;
	return dem;
}