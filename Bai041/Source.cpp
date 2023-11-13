#include <iostream>
#include <limits>
#include <iomanip>
using namespace std;

bool EvenExisted(int);

int main()
{
    cout << "Problem 041 - To Vinh Tien - 22521474" << endl;
    int n;
    cout << "\nEnter the value of n:           ";
    cin >> n;
    while (n > INT_MAX || n < 0)
    {
        cout << "The inputted value of n is invalid. Please re-enter the value of n." << endl;
        cout << "\nEnter the value of n:        ";
        cin >> n;
    }
    if (EvenExisted(n) == true)
        cout << "\nIn the number " << n << " exists even digits." << endl;
    else
        cout << "\n In the number " << n << " doesn't exists even digits." << endl;
    cout << endl;
    return 0;
}

bool EvenExisted(int n)
{
    n = abs(n);
    if (n <= 9)
    {
        if (n % 2 == 0)
            return true;
        return false;
    }
    int unit = n % 10;
    if (unit % 2 == 0)
        return true;
}