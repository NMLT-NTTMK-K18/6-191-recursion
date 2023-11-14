#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

void Nhap(float[], int&);
void LietKe(float[], int);
float LonNhat(float[], int);

int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	LietKe(a, n);
	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap mang: ";
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		cin >> a[i];
	cout << "\nMang ban dau la: ";
	for (int i = 0; i < n; i++)
		cout << setw(5) << a[i];
	cout << endl;
	cout << "Cac vi tri tai do la gia tri lon nhat la: ";
}

void LietKe(float a[], int n)
{
	if (n == 0)
		return;
	float lc = LonNhat(a, n - 1);
	if (lc < a[n - 1])
	{
		cout << setw(6) << n - 1;
			return;
	}
	if (lc == a[n - 1])
		cout << setw(6) << n - 1;
	LietKe(a, n - 1);

}

float LonNhat(float a[], int n)
{
	if (n == 1)
		return a[0];
	float lc=LonNhat(a, n - 1);
	if (a[n - 1] >= lc)
		lc = a[n - 1];
	return lc;

}