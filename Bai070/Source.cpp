#include <iostream>
#include <iomanip>
using namespace std;

void LietKe(int[], int);

int main()
{
	int a[100], n;
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	LietKe(a, n);
	return 0;
}

void LietKe(int a[], int n)
{
	if (n == 0)
		return;
	LietKe(a, n - 1);
	if (a[n - 1] % 2 == 0)
		cout << setw(10) << a[n - 1];
}