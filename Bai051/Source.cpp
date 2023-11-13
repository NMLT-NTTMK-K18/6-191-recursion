#include <iostream>
#include <iomanip>
using namespace std;

int S(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "\nKet qua cua S(" << n << ") la:	" << setw(5) << S(n) << endl;
	return 0;
}

int S(int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	return (1 + n) * S(n - 1) - n * S(n - 2);
}