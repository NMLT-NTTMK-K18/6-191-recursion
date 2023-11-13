#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void LietKe(int[], int);
int Kt3m(int);

int main()
{
	int* a = new int[100];
	int n;
	Nhap(a, n);
	LietKe(a, n);
	delete[]a;
	return 1;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap so luong phan tu trong mang: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Phan tu a[" << i << "] = ";
		cin >> a[i];
	}
}

void LietKe(int a[], int n)
{
	if (n == 0)
		return;
	LietKe(a, n - 1);
	if (Kt3m(a[n-1]))
		cout << a[n - 1] << setw(5);
}

int Kt3m(int x)
{
	while (x > 1)
	{
		int du = x % 3;
		if (du != 0)
			return 0;
		x = x / 3;
	}
	return 1;
}