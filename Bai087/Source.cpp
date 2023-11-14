#include<iostream>
#include<iomanip>
using namespace std;
float Tong(float[], int);
void Nhap(float[], int&);
int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	float kq = Tong(a, n);
	cout << "Tong cac phan tu duong trong mang 1 chieu la :" << kq;
	return 0;
}
float Tong(float a[], int n)
{
	if (n == 0)
		return 0;
	float s = Tong(a, n - 1);
	if (a[n - 1] > 0)
	return  s + a[n - 1];
	return s;
}
void Nhap(float a[], int& n)
{
	cout << "Nhap n:";
	cin >> n;
	for (int i = 0; i < n; i++) 
		cin >> a[i];
}
