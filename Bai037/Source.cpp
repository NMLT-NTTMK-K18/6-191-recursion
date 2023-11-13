#include <iostream>
using namespace std;

int DemSoChan(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "\n So luong chu so chan cua so nguyen " << n << "= " << DemSoChan(n);
	return 0;
}

int DemSoChan(int n)
{
	n = abs(n);
	if (n <= 9)
	{
		if (n % 2 == 0)
			return 1;
		return 0;
	}
	int dem = DemSoChan(n / 10);
	int dv = n % 10;
	if (dv % 2 == 0)
	return(dem + 1);
	return dem;
}