
#include <iostream>
#include <vector>
using namespace std;

int first(int a[], int n, int x)
{
    if (n >= 0)
    {
        if (a[0] == x)
        {
            return n;
        }
        else
        {
            return first(a + 1, n - 1, x);
        }
    }

    return -1;
}

int last(int a[], int n, int x)
{
    static int curr_last = -1;

    if (n >= 0)
    {

        if (a[0] == x)
        {
            curr_last = n;
        }

        return last(a + 1, n - 1, x);
    }

    return curr_last;
}

vector<int> all(int a[], int n, int x)
{
    static vector<int> indexes;
    static int size = n;

    if (n >= 0)
    {

        if (a[0] == x)
        {
            indexes.push_back(size - n);
        }

        all(a + 1, n - 1, x);
    }
    return indexes;
}

int main()
{
    int a[] = {4, 6, 64, 56, 6, 74, 56, 6, 75, 67, 6};
    int size = sizeof(a) / sizeof(a[0]);
    int x;
    cin >> x;

    cout << "First : " << size - first(a, size, x) << "\n";

    cout << "Last : " << size - last(a, size, x) << "\n";

    vector<int> indexes = all(a, size, 6);
    cout << "All Indexes : ";
    for (int i = 0; i < indexes.size(); i++)
    {
        cout << indexes[i] << " ";
    }

    return 0;
}