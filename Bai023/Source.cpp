#include <iostream>
#include <limits>
#include <iomanip>
using namespace std;

int ProductOfDigits(int);

int main()
{
    int n;
    cout << "\nEnter the value of n:           ";
    cin >> n;
    while (n > INT_MAX || n < 0)
    {
        cout << "The inputted value of n is invalid. Please re-enter the value of n." << endl;
        cout << "\nEnter the value of n:        ";
        cin >> n;
    }
    cout << "\nThe result of T(" << n << ") is:          " << ProductOfDigits(n) << "." << endl;
    return 0;
}

int ProductOfDigits(int n)
{
    n = abs(n);
    if (n <= 9)
        return n;
    int P = ProductOfDigits(n / 10);
    int unit = n / 10;
    return P * unit;
}