#include <iostream>
using namespace std;
void Nhap(int [], int&);
bool isInArray(int arr[], int n, int x) {
    if (n == 0) {
        return false;
    }
    if (arr[n - 1] == x) {
        return true;
    }
    return isInArray(arr, n - 1, x); 
}

bool areAllElementsInArray(int a[], int m, int b[], int n) {
    if (m == 0) {
        return true; 
    }
    if (!isInArray(b, n, a[m - 1])) {
        return false; 
    }
    return areAllElementsInArray(a, m - 1, b, n); 
}

int main() {
    int a[100];
    int m;
    Nhap(a, m);
    int b[100];
    int n;
    Nhap(b, n);
    if (areAllElementsInArray(a, m, b, n)) {
        cout << "Tat ca cac phan tu trong mang a deu co trong mang b." << endl;
    }
    else {
        cout << "Khong phai tat ca cac phan tu trong mang a deu co trong mang b." << endl;
    }
    return 0;
}
void Nhap(int a[], int& n)
{
    cout << "Nhap n:";
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
}