#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[][100], int&, int&);
bool ktNguyenTo(int);
void LietKe(int[][100], int, int);

int main()
{
	int m, n;
	int a[100][100];
	Nhap(a, m, n);
	LietKe(a, m, n);
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

bool ktNguyenTo(int k)
{

}

void LietKe(int a[][100], int m, int n)
{
	if (m == 0)
		return;
	LietKe(a, m - 1, n);
	for (int j = 0; j < n; j++)
		if (ktNguyenTo(a[m - 1][j]))
			cout << setw(4) << a[m - 1][j];
}