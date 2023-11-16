#include <iostream>
using namespace std;

int Tinh(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "An = " << Tinh(n);
	return 0;
}

int Tinh(int n)
{
	if (n == 0)
		return -1;
	if (n == 1)
		return 3;
	int x = Tinh(n - 1);
	int y = Tinh(n - 2);
	return 5 * x - y;
}