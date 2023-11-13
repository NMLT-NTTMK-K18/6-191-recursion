#include <iostream>
#include <limits>
#include <iomanip>
#include <cmath>
using namespace std;

int sum(int);

int main()
{
    int n;
    cout << "\nEnter the value of n:        ";
    cin >> n;
    while (n > INT_MAX || n < 0)
    {
        cout << "The inputted value of n is invalid. Please re-enter the value of n." << endl;
        cout << "\nEnter the value of n:        ";
        cin >> n;
    }
    cout << "\nThe result of S(" << n << ") is:      " << sum(n) << "." << endl;
    return 0;
}

int sum(int n)
{
    if (n == 0)
        return 0;
    return (sum(n - 1) + pow(n,4));
}