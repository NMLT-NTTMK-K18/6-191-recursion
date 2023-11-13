#include <iostream>
#include <cmath>

using namespace std;

int ktTang(int);

int ktTang(int n)
{
	n = abs(n);
	if (n <= 9)
		return 1;
	int dv = n % 10;
	int hc = (n / 10) % 10;
	if (ktTang(n / 10) && hc <= dv)
		return 1;
	return 0;
}

int main()
{
	int k;
	cout << "Nhap k: ";
	cin >> k;

	int kq = ktTang(k);
	if (kq == 1)
		cout << "Chu so tang";
	else
		cout << "Chu so khong tang";
	return 1;
}