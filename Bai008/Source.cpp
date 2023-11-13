#include<iostream>
using namespace std;

long long Tich(int);
int main()
{
	int k;
	cin >> k;
	cout << "Giai thua la:";
	long long kq = Tich(k);
	cout << kq;
	return 0;
}
long long Tich(int n)
{
	if (n == 0) return 1;
	return Tich(n - 1) * n;
} 