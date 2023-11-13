#include <iostream>
#include <iomanip>
using namespace std;

void Input(int[], int&);
void Output(int[], int);
int FirstEvenEle(int[], int);

int main()
{
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
	int fev = FirstEvenEle(arr, n);
	if (fev == -1)
		cout << "\nThe inputted array doesn't exist any even element.";
	else
		cout << "\nThe first even element in the inputted array is: " << fev << ".";
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

int FirstEvenEle(int arr[], int n)
{
	if (n == 0)
		return -1;
	int decoy = FirstEvenEle(arr, n - 1);
	if (decoy != -1)
		return decoy;
	if (arr[n - 1] % 2 == 0)
		return arr[n - 1];
	return -1;
}