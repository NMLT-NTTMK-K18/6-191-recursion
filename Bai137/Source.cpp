#include <iostream>
#include <iomanip>
using namespace std;

void Input(int[], int&);
void Output(int[], int);
int Freq(int[], int, int);
int MaxFreqEle(int[], int);

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
	int mfe = MaxFreqEle(arr, n);
	cout << "The element which has the highest frequency is: " << mfe << ".";
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

int Freq(int arr[], int n, int x)
{
	int counter = 0;
	for (int i = 0; i < n; i++)
		if (arr[i] == x)
			counter++;
	return counter;
}

int MaxFreqEle(int arr[], int n)
{
	if (n == 1)
		return arr[0];
	int decoy = MaxFreqEle(arr, n - 1);
	if (Freq(arr, n, arr[n - 1]) > Freq(arr, n, decoy))
		decoy = arr[n - 1];
	return decoy;
}