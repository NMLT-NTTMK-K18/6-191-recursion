#include<iostream>
#include<cmath>
using namespace std;
float sum(float,int);
int main()
{
	float x;
	cin >> x;
	int n;
	cin >> n;
	float kq = sum(x,n);
	cout << "tong day tu 1 den x^n la :" << kq;
	return 0;
}
float sum(float x,int n)
{
	if (n == 0)
		return 1;
	if (n == 1)
		return (1 + x);
	float a = sum(x, n - 1);
	float b = sum(x, n - 2);
	return ((1 + x) * a - x * b);
}