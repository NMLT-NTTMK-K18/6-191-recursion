#include <iostream>
using namespace std;

int TinhAn(int);
int TinhBn(int);

int main()
{

	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "A" << n << "= " << TinhAn(n);
	cout << "\nB" << n << "= " << TinhBn(n);
	return 0;
}

int TinhAn(int n)
{
	if (n == 1)
		return 2;
	int a = TinhAn(n - 1);
	int b= TinhBn(n - 1);
	return(a * a + 2 * b * b);
}

int TinhBn(int n)
{
	if (n == 1)
		return 1;
	int a = TinhAn(n - 1);
	int b = TinhBn(n - 1);
	return(2*a*b);
}
