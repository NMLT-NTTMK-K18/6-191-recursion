#include <iostream>
using namespace std;
float Tong(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "Tong S: " << Tong(n);
	return 0;
}

float Tong(int n)
{
	if (n == 0)
		return 1;
	return 1 / (1 + Tong(n - 1));
}