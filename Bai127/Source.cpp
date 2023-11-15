#include<iostream>
#include<iomanip>
using namespace std;
int ViTriCuoi(int[], int);
void Nhap(int a[], int& n);
bool ktHoanThien(int);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	int kq = ViTriCuoi(a, n);
	cout << "Vi tri so hoan thien cuoi cung la: " << kq;
	return 0;
}
int ViTriCuoi(int a[], int n)
{
	if (n == 0)
		return -1;
	if (ktHoanThien(a[n - 1]))
		return n - 1;
	return (ViTriCuoi(a, n - 1));
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n:";
	cin >> n;
	cout << "Nhap mang: ";
	cout << endl;
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

bool ktHoanThien(int a)
{
	int s = 0;
	int n = 1;
	while (n < a)
	{
		if (a % n == 0)
			s += n;
		n++;
	}
	if (a == s)
		return true;
	return false;
}

