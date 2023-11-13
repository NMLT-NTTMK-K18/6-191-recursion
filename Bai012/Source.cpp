#include <iostream>
using namespace std;

float Tich(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "\n Tich Tn= " << Tich(n);
	return 0;
}

float Tich(int n)
{
	if (n == 0)
		return 1;
	float T = Tich(n - 1);
	return (T * (1 + (float)1 / (n * n)));
}