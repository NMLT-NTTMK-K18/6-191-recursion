#include <iostream>
using namespace std;
int Tinh(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "an = " << Tinh(n);
	return 0;
}

int Tinh(int n)
{
	if (n == 0)
		return 1;
	if (n == 1)
		return 2;
	return Tinh(n - 1) * 4 + Tinh(n - 2);
}