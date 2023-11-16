#include <iostream>
using namespace std;

int DemChan(int[], int);

int main()
{
	int n;
	int a[100];
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	cout << "Co " << DemChan(a, n) << " so chan";
	return 0;
}

int DemChan(int a[], int n)
{
	if (n == 0)
		return 0;
	int dem = DemChan(a, n - 1);
	if (a[n - 1] % 2 == 0)
		dem++;
	return dem;
}
