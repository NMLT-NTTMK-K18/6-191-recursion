#include<iostream>
using namespace std;
int ChuSoNhoNhat(int );
int main()
{
	int n;
	cin >> n;
	int lc = ChuSoNhoNhat(n);
	cout << lc;
	return 0;
}
int ChuSoNhoNhat(int n)
{
	if (n <= 9)
		return n;
	int lc = ChuSoNhoNhat(n / 10);
	int dv = n % 10;
	if (dv < lc)
		lc = dv;
	return lc;
}