#include <iostream>
#include <iomanip>
using namespace std;

void Input(float[], int&);
void Enumerate(float[], int);
void Output(float[], int);

int main()
{
	cout << "Problem 071 - To Vinh Tien - 22521474" << endl;
	int n = 0;
	while (n <= 0)
	{
		cout << "\nEnter n:		";
		cin >> n;
	}
	float* arr = new float[n];
	Input(arr, n);
	cout << "\nYour inputted array is:" << endl;
	Output(arr, n);
	cout << "\nAll the negative elements in the inputted array:" << endl;
	Enumerate(arr, n);
	delete[]arr;
	cout << endl;
	return 1;
}

void Input(float arr[], int& n)
{
	cout << "\nYour inputted array will have " << n << " elements." << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "Enter arr[" << i << "] element:	";
		cin >> arr[i];
	}
}

void Output(float arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (i % 20 == 0 && i != 0)
			cout << endl;
		cout << setw(10) << setprecision(6) << arr[i];
	}
	cout << endl;
}

void Enumerate(float arr[], int n)
{
	if (n == 0)
		return;
	Enumerate(arr, n - 1);
	if (arr[n - 1] < 0)			
		cout << setw(10) << setprecision(6) << arr[n - 1];
}