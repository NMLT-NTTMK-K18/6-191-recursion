#include<iostream>
#include<iomanip>
using namespace std;
void Xuat(float[], int);
int main()
{
	float a[100];
	int n;
	cout << "nhap n:";
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	Xuat(a, n);
	return 0;

}
void Xuat(float a[], int n)
{
	if (n == 0)
		return;
	Xuat(a, n - 1);
	cout << setw(5) << setprecision(3) << a[n - 1];
}