#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int a[][100], int &m, int &);
void LietKe(int a[][100], int, int, int);
bool ktDang(int);

int main()
{
	int a[100][100];
	int m, n;
	Nhap(a, m, n);
	int d;
	cout << "Nhap dong muon kiem tra: ";
	cin >> d;
	LietKe(a, m, n, d);
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

bool ktDang(int n)
{
	int t = n;
	int dt = 0;

	while (t > 1)
	{
		dt = t % 3;
		if (dt != 0)
			return false;
		t = t / 3;
	}
	return true;
}

void LietKe(int a[][100], int m, int n, int d)
{
	if (n == 0)
		return;
	LietKe(a, m, n - 1, d);
	if (ktDang(a[d][n - 1]))
		cout << setw(4) << a[d][n - 1];
}