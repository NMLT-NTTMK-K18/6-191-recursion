#include <iostream>
#include <iomanip>
using namespace std;

bool ktNguyenTo(int);
int DemNguyenTo(int[], int);

int main()
{
	int n;
	int a[100];
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	cout << "Co " << DemNguyenTo(a, n) << " so nguyen to";
	return 0;
}

bool ktNguyenTo(int k)
{
	int dem = 0;
	for (int i = 1; i <= k; i++)
		if (k % i == 0)
			dem++;
	if (dem == 2)
		return 1;
	return 0;
}

int DemNguyenTo(int a[], int n)
{
	if (n == 0)
		return 0;
	int dem = DemNguyenTo(a, n - 1);
	if (ktNguyenTo(a[n - 1]))
		dem++;
	return dem;
}