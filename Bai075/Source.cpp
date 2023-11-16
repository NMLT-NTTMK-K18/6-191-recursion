#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

bool ktToanLe(int);
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

bool ktToanLe(int k)
{
	k = abs(k);
	if (k <= 9)
	{
		if (k % 2 != 0)
			return 1;
		return 0;
	}
	int dv = k % 10;
	if (ktToanLe(k / 10) == 1 && dv % 2 != 0)
		return 1;
	return 0;
}

void LietKe(int a[], int n)
{
	if (n == 0)
		return;
	LietKe(a, n - 1);
	if (ktToanLe(a[n - 1]) == 1)
		cout << setw(10) << a[n - 1];
}