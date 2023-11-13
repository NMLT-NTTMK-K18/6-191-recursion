#include <iostream>
using namespace std;

int ktToanChan(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int kq = ktToanChan(n);
	if (kq == 1)
		cout << "Chu so toan Chan";
	else
		cout << "Chu so khong toan Chan";
	return 0;
}

int ktToanChan(int n)
{
	n = abs(n);
	if (n <= 9)
	{
		if (n % 2 == 0)
			return 1;
		return 0;
	}
	int dv = n % 10;
	if (dv % 2 != 0)
		return 0;
	return ktToanChan(n / 10);
}