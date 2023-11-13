#include <iostream>
#include <iomanip>
using namespace std;

void Input(int[], int&);
void Output(int[], int);
bool PrimeNumChk(int);
int MaxPrimeEle(int[], int);

int main()
{
	cout << "Problem 131 - To Vinh Tien - 22521474" << endl;
	int n = 0;
	while (n <= 0)
	{
		cout << "\nEnter n:		";
		cin >> n;
	}
	int* arr = new int[n];
	Input(arr, n);
	cout << "\nYour inputted array is:" << endl;
	Output(arr, n);
	int mpe = MaxPrimeEle(arr, n);
	if (mpe == 0)
		cout << "\nThe inputted array doesn't have any prime number/element.";
	else
		cout << "\nThe biggest prime number/element in the inputted array is: " << mpe << ".";
	delete[]arr;
	cout << endl;
	return 1;
}

void Input(int arr[], int& n)
{
	cout << "\nYour inputted array will have " << n << " elements." << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "Enter arr[" << i << "] element:	";
		cin >> arr[i];
	}
}

void Output(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (i % 20 == 0 && i != 0)
			cout << endl;
		cout << setw(10) << setprecision(6) << arr[i];
	}
	cout << endl;
}

bool PrimeNumChk(int n)
{
	if (n <= 1)
		return false;
	for (int i = 2; i * i <= n; i++)
		if (n % i == 0)
			return false;
	return true;
}

int MaxPrimeEle(int arr[], int n)
{
	if (n == 0)
		return 0;
	int decoy = MaxPrimeEle(arr, n - 1);
	if (PrimeNumChk(arr[n - 1]) == false)
		return decoy;
	if (decoy == 0)
		return arr[n - 1];
}