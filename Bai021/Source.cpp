#include <iostream>
using namespace std;

float Tong(float, int);

int main()
{
	int k;
	float y;
	cout << "Nhap so nguyen: ";
	cin >> k;
	cin >> y;
	float kq = Tong(y, k);
	cout << "Ket qua la: " << kq;
	return 0;
}

float Tong(float x, int n)
{
	if (n == 0)
		return x;
	return (Tong(x, n - 1) * (x + n));
}