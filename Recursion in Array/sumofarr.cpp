#include <iostream>
using namespace std;

int sum(int a[], int size)
{
    if (size == 0)
    {
        return a[0];
    }

    return a[0] + sum(a + 1, size - 1);
}

int main()
{

    int arr[] = {23, 4, 234, 32, 534, 5, 23, 423, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << sum(arr, size - 1);

    return 0;
}