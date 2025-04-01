#include <bits/stdc++.h>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

// Hàm partition cho thuật toán QuickSort
int partition(vector<int> &arr, int low, int high)
{
    int pivot = arr[high]; // Chọn phần tử chốt (pivot)
    int i = low - 1;       // Vị trí của phần tử nhỏ hơn pivot

    for (int j = low; j < high; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

// Hàm QuickSort đệ quy
void quickSort(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high); // Chia mảng
        quickSort(arr, low, pi - 1);        // Sắp xếp phần bên trái
        quickSort(arr, pi + 1, high);       // Sắp xếp phần bên phải
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n); // Dùng vector thay vì mảng động không hợp lệ

    for (int i = 0; i < n; i++)
        cin >> a[i];

    quickSort(a, 0, n - 1);

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}
