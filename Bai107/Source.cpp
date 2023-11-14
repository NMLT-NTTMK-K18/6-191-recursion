#include<iostream>
#include<iomanip>
using namespace std;
int TimViTri(float[], int, float);
void Nhap(float a[], int& n);

int main()
{
	float a[100];
	int n;
	float x;
	Nhap(a, n);
	cout << "Nhap x: ";
	cin >> x;
	int kq =TimViTri(a, n,x);
	cout << "Vi tri trong mang mot chieu cac so thuc ma gia tri tai do gan voi gia tri x nhat la :" << kq;
	return 0;
}
int TimViTri(float a[], int n, float x)
{
	{
		if (n == 1)
			return 0;
		int lc = TimViTri(a, n - 1, x);
		if (abs(a[n - 1] - x) < abs(a[lc] - x))
			lc = n - 1;
		return lc;
    }
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n:";
	cin >> n;
	cout << endl;
	cout << "Nhap mang: ";
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

