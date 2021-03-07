#include <iostream>
using namespace std;

int check(int a[], int n, int x)
{
    if (n >= 0)
    {
        if (a[0] == x)
        {
            return n;
        }
        else
        {
            return check(a + 1, n - 1, x);
        }
    }

    return -1;
}

int main()
{

    int a[] = {4, 6, 64, 56, 74, 56, 75, 67};
    int size = sizeof(a) / sizeof(a[0]);
    int x;
    cin >> x;

    int index = check(a, size, x);

    if (index > 0)
    {
        cout << size - index;
    }
    else
    {
        cout << "Not Present";
    }

    return 0;
}