#include <iostream>
#include <iomanip>
using namespace std;

void LietKe(float[], int, float, float);

int main()
{
	int n;
	float a[100], x, y;
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap y: ";
	cin >> y;
	LietKe(a, n, x, y);
	return 0;
}

void LietKe(float a[], int n, float x, float y)
{
	if (n == 0)
		return;
	LietKe(a, n - 1, x, y);
	if (a[n - 1] >= x && a[n - 1] <= y)
		cout << setw(10) << a[n - 1];
}