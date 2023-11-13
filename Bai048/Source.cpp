#include<iostream>

using namespace std;

int Tinh(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int kq = Tinh(n);
	cout << "Ket qua la: " << kq;
	return 0;
}
int Tinh(int n)
{
	if (n == 0)
		return -1;
	if (n == 1)
		return 3;
	return ((5 * Tinh(n - 1)) + (6 * Tinh(n - 2)));
}