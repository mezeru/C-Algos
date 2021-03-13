#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> arr;
    int n, min = 100000, pos = 0, max = 0;
    cin >> n;

    for (int i = 0, inp; i < n; i++)
    {
        cin >> inp;
        arr.push_back(inp);

        if (min > inp)
        {
            min = inp;
            pos = i;
        }
    }

    for (int i = pos; i < n; i++)
    {
        arr[i] = arr[i] - min;
    }

    for (int i = pos; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    cout << max;
}