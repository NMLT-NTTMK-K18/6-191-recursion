#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(int[][100], int&, int&);
int TongNguyenTo(int[][100], int, int);
bool ktNguyenTo(int);

int main()
{
	int a[100][100];
	int m, n;
	Nhap(a, m, n);
	cout << "Tong cac so nguyen to trong ma tran la:";
	cout<< TongNguyenTo(a, m, n);
	return 0;
}

void Nhap(int a[][100], int& m, int& n)
{
	cout << "Nhap so dong: ";
	cin >> m;
	cout << "\nNhap so cot: ";
	cin >> n;
	cout << "\nNhap Mang: ";
	cout << endl;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
}

int TongNguyenTo(int a[][100], int m, int n)
{
	if (m == 0)
		return 0;
	int s = TongNguyenTo(a, m - 1, n);
	for (int j = 0; j < n; j++)
		if (ktNguyenTo(a[m - 1][j]))
			s += a[m - 1][j];
	return s;
}

bool ktNguyenTo(int a)
{
	if (a < 1)
		return false;
	int dem = 0;
	for (int i = 0; i <= a; i++)
		if (a % i == 0)
			dem++;
	if (dem == 2)
		return true;
	return false;
}