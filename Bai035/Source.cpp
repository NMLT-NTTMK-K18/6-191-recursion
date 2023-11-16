#include <iostream>
#include <iomanip>
using namespace std;

void LietKe(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	LietKe(n);
	return 0;
}

void LietKe(int n)
{
	if (n == 1)
	{
		cout << setw(10) << n;
		return;
	}
	cout << setw(10) << n;
	if (n % 2 == 0)
		LietKe(n / 2);
	else
		LietKe(3 * n + 1);
}