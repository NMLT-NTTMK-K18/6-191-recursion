// Binary Search
#include <iostream>
using namespace std;

#define AMOUNT_OF_ELEMENTS 10

void nhap(int[], int &);
void xuat(int[], int);
int binarySearch(int[], int, int, int);

int main()
{
	int arr[AMOUNT_OF_ELEMENTS];
	int n;
	nhap(arr, n);

	cout << "Mang vua nhap la:" << endl;
	xuat(arr, n);

	int x;
	cout << "Nhap x: ";
	cin >> x;

	cout << "Vi tri cua x = " << x << " la: " << binarySearch(arr, AMOUNT_OF_ELEMENTS, 0, x) << endl;

	return 0;
}

void nhap(int arr[], int &n)
{
	cout << "Nhap so luong phan tu: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan tu thu " << i << ": ";
		cin >> arr[i];
	}
}

void xuat(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

int binarySearch(int arr[], int number_of_current_elements, int current_index, int x)
{
	if (number_of_current_elements == 1)
		return current_index;
	if (arr[current_index + number_of_current_elements / 2 - 1] >= x)
		return binarySearch(arr, number_of_current_elements / 2, current_index, x);
	else
	{
		return binarySearch(arr, number_of_current_elements - number_of_current_elements / 2, current_index + number_of_current_elements / 2, x);
	}
}