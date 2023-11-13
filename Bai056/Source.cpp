#include <iostream>
#include <limits>
#include <iomanip>
using namespace std;

float sum(int);

int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;

    cout << "S(" << n << "): " << setw(5) << setprecision(5) << sum(n) << endl;
    return 0;
}

float sum(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    float a = sum(n - 1);
    float b = sum(n - 2);
    return (a + (float)1 / (n + 1 / (a - b)));
}