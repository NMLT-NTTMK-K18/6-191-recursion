#include <iostream>
using namespace std;

float TinhAn(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "\n Tong Sn= " << TinhAn(n);
	return 0;
}

float TinhAn(int n)
{
	if (n == 1)
		return 2;
	float s = TinhAn(n - 1);
	return((float)(-9 * s - 24) / (5 * s + 13));
}
