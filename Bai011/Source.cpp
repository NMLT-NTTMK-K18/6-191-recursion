#include <iostream>
#include <cmath>
using namespace std;

int sum(int);

int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;

    cout << "Sn: " << sum(n) << endl;
    return 0;
}

int sum(int n)
{
    if (n == 0)
        return 0;
    return (sum(n - 1) + pow(n, 4));
}