#include <iostream>
#include <iomanip>
using namespace std;

void Input(int[], int &);
void Output(int[], int);
bool PerfNumChk(int);
int PerfNumCount(int[], int);

int main()
{
	int n;
	cout << "Nhap n";
	cin >> n;

	int *arr = new int[n];
	Input(arr, n);
	cout << "Array vua nhap:" << endl;
	Output(arr, n);

	cout << "So cac so hoan thien trong array: " << PerfNumCount(arr, n) << endl;

	delete[] arr;
	return 0;
}

void Input(int arr[], int &n)
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

bool PerfNumChk(int e)
{
	int sum = 0;
	for (int i = 1; i < e; i++)
		if (e % i == 0)
			sum += i;
	return (sum == e);
}

int PerfNumCount(int arr[], int n)
{
	if (n == 0)
		return 0;
	return PerfNumCount(arr, n - 1) + (PerfNumChk(arr[n - 1]) ? 1 : 0);
}