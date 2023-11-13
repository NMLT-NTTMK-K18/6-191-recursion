#include <iostream>
#include <iomanip>
using namespace std;

void Input(float[], int&);
void Enumerate(float[], int);
float Min(float[], int);
void Output(float[], int);

int main()
{
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
	cout << "\nLocation of all the minimum elements in the inputted array:" << endl;
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

float Min(float arr[], int n)
{
	float minVal = arr[0];
	for (int i = 1; i < n; i++)
		if (arr[i] < minVal)
			minVal = arr[i];
	return minVal;
}

void Enumerate(float arr[], int n)
{
	if (n == 0)
		return;
	float decoy = Min(arr, n - 1);
	if (decoy > arr[n - 1])
	{
		cout << setw(10) << n - 1;
		return;
	}
	if (decoy == arr[n - 1])
		cout << setw(10) << n - 1;
	Enumerate(arr, n - 1);
}