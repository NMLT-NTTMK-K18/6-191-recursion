#include <iostream>
#include <iomanip>
using namespace std;

void Input(float[], int &);
void LietKe(float[], int);
void Output(float[], int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	float arr[100];
	Input(arr, n);

	cout << "Array vua nhap:" << endl;
	Output(arr, n);

	cout << "Array cac so am:" << endl;
	LietKe(arr, n);

	return 0;
}

void Input(float arr[], int &n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "arr[" << i << "]:";
		cin >> arr[i];
	}
}

void Output(float arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (i % 20 == 0 && i != 0)
			cout << endl;
		cout << setw(10) << setprecision(3) << arr[i];
	}
	cout << endl;
}

void LietKe(float arr[], int n)
{
	if (n == 0)
		return;
	LietKe(arr, n - 1);
	if (arr[n - 1] < 0)
		cout << setw(10) << setprecision(3) << arr[n - 1];
}