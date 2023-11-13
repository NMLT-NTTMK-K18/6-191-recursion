#include <iostream>
#include <iomanip>

using namespace std;

void ThemViTri(int[], int&, int, int);
void Nhap(int[], int&);
void Xuat(int[], int);

void ThemViTri(int a[], int& n, int x, int vt)
{
	if (vt == n)
	{
		a[n] = x;
		n++;
		return;
	}
	swap(a[vt], x);
	ThemViTri(a, n, x, vt + 1);

}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

void Xuat(int a[], int n)
{
	if (n == 0)
		return;
	Xuat(a, n - 1);
	cout << setw(6) << a[n - 1];
}

int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	int y, VT;
	cout << "\nNhap gia tri x: ";
	cin >> y;
	cout << "Nhap vi tri: ";
	cin >> VT;
	ThemViTri(b, k, y, VT);
	cout << "Mang sau khi them: ";
	Xuat(b, k);
	return 1;
}