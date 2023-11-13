#include <iostream>
#include <iomanip>
using namespace std;

void Input(int[], int&);
void Output(int[], int);
int CountOccurrence(int[], int, int[], int, int, int);

int main()
{
	int n = 0, m = 0;
	while (n <= 0)
	{
		cout << "\nEnter n - size of the first array:		";
		cin >> n;
	}
	int* arr1 = new int[n];
	Input(arr1, n);
	while (m <= 0)
	{
		cout << "\nEnter m - size of the second array:		";
		cin >> m;
	}
	int* arr2 = new int[m];
	Input(arr2, m);
	cout << "\nYour 1st inputted array is:" << endl;
	Output(arr1, n);
	cout << "\nYour 2nd inputted array is:" << endl;
	Output(arr2, m);
	int counter = CountOccurrence(arr1, n, arr2, m, 0, 0);
	if (counter == 0)
		cout << "\nThe first inputted array doesn't appear in second inputted array.";
	else
		cout << "\nThe numbers of times that first inputted array appears in second inputted array is: " << counter << ".";
	delete[]arr1;
	delete[]arr2;
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

int CountOccurrence(int arr1[], int n, int arr2[], int m, int i, int j) 
{
	if (i >= n || j >= m)
		return 0;
	if (arr1[i] == arr2[j]) 
	{
		if (i == n - 1)
			return 1 + CountOccurrence(arr1, n, arr2, m, i, j + 1);
		else
			return CountOccurrence(arr1, n, arr2, m, i + 1, j + 1);
	}
	return CountOccurrence(arr1, n, arr2, m, 0, j + 1);
}
