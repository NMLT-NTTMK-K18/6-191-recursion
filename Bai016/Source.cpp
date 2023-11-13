#include <iostream>
using namespace std;

float Tong(int);

int main()
{
	int k;
	cout << "Nhap so nguyen: ";
	cin >> k;
	float kq = Tong(k);
	cout << "Tong la: " << kq;
	return 0;
}

float Tong(int n)
{
	if (n == 0)
		return 0;
	return (Tong(n - 1) + (float)1 / (n * (n + 1) * (n + 2)));
}