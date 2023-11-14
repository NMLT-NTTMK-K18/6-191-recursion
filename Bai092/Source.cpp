#include<iostream>
#include<iomanip>
using namespace std;
int Tong(int[], int);
void Nhap(int[], int&);
int ChuSoDau(int);
int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	float kq = Tong(a, n);
	cout << "Tong cac phan tu co chu so dau tien la so chan trong mang 1 chieu la :" << kq;
	return 0;
}
int Tong(int a[], int n)
{
	if (n == 0)
		return 0;
	float s = Tong(a, n - 1);
	if (ChuSoDau(a[n-1])%2==0)
		return  s + a[n - 1];
	return s;
}
void Nhap(int a[], int& n)
{
	cout << "Nhap n:";
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
}
int ChuSoDau(int n)
{
	n = abs(n);
	if (n <= 9)
		return n;
	return(ChuSoDau(n / 10));
	
}