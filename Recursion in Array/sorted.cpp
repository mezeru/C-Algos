#include <iostream>
using namespace std;

bool sorted(int a[], int i)
{

    if (i == 1 || i == 2)
    {
        return true;
    }

    if (a[0] > a[1])
    {
        return false;
    }

    return sorted(a + 1, i - 1);
}

int main()
{
    int a[] = {};

    int size = sizeof(a) / sizeof(a[0]);

    cout << (sorted(a, size) == 0 ? "Yes" : "NO");

    return 0;
}
