#include<iostream>
using namespace std;
long long a(int);
long long b(int);
int main()
{
	int n;
	cin >> n;
	long long kq = a(n);
	long long kq2 = b(n);
	cout << kq << " " << kq2;
	return 0;
}
long long a(int n)
{
	if (n == 1)
		return 2;
	return 3 * b(n - 1) + 2 * a(n - 1);

}
long long b(int n)
{
	if (n == 1)
		return 1;
	return a(n - 1) + 3 * b(n - 1);
}