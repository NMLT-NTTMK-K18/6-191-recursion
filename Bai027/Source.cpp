#include <iostream>
using namespace std;

float Tinh(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "\n Tong Sn= " << Tinh(n);
	return 0;
}

float Tinh(int n)
{
	if (n <= 1)
		return 0;
	float s = Tinh(n - 1);
	return(pow(n + s, (float)1/n));
}