#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[][100], int&, int&);

void XayDung(float[][100], int, int,float[][100], int&, int&);
void Xuat(float[][100], int, int);
int main()
{
	int m, n,k,l;
	float a[100][100];
	float b[100][100];
	Nhap(a, m, n);

	cout << "Ma tran sau khi xay dung la:" << endl;
	XayDung(a, m, n, b, k, l);
	Xuat(b, k, l);
	return 0;
}

void Nhap(float a[][100], int& m, int& n)
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

void XayDung(float a[][100], int m, int n, float b[][100], int& k, int& l)
{
	if (m == 0)
	{
		k = 0;
		l = n;
		return;
	}
	XayDung(a, m - 1, n, b, k, l);
	for (int j = 0; j < l; j++)
		b[m - 1][j] = abs(a[m - 1][j]);
	k++;

}
void Xuat(float a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		cout << endl;
		for (int j = 0; j < n; j++)
			cout << setw(5) << a[i][j] ;
	}
}