#include <iostream>
using namespace std;
int ChuSoDau(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "Chu so dau: " << ChuSoDau(n);
	return 0;
}

int ChuSoDau(int n)
{
	n = abs(n);
	if (n <= 9)
		return n;
	return ChuSoDau(n / 10);
}