#include <iostream>;

using namespace std;

int Tong(int);

int main()
{
	int k;
	cout << "Nhap n: ";
	cin >> k;

	int kq = Tong(k);
	cout << "S(" << k << ")= " << kq;
	return 1;
}

int Tong(int n)
{
	if (n == 0)
		return 0;
	int s = Tong(n - 1);
	return (s + n * n);
}