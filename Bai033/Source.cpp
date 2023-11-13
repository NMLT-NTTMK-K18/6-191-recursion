#include<iostream>

using namespace std;

float TinhAn(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float kq = TinhAn(n);
	cout << "So hang thu " << n << " la: " << kq;
	return 0;
}
float TinhAn(int n)
{
	if (n == 1)
		return 2;
	float at = TinhAn(n - 1);
	return (at * at + 2) / (2 * at);
}