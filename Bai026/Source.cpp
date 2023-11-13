#include<iostream>
#include<cmath>
using namespace std;
float sum(int);
int main()
{
    int n;
    cin >> n;
    float kq = sum(n);
    cout << kq;
    return 0;
	 
}
float sum(int n)
{
    if (n == 0)
        return 0;
    return sqrt(n + sum(n - 1));
}