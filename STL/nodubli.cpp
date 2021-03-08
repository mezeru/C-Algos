#include <iostream>
#include <string.h>
#include <vector>
#include <set>

using namespace std;

vector<int> dublicate(int a[], int size)
{
    vector<int> result;
    set<int> s;

    for (int i = 0; i < size; i++)
    {
        if (s.find(a[i]) == s.end())
        {
            s.insert(a[i]);
            result.push_back(a[i]);
        }
    }

    return result;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 4, 4, 4, 3, 2, 1, 54};
    vector<int> result = dublicate(arr, (sizeof(arr) / sizeof(arr[0])));

    for (int i = 0; i < result.size(); i++)
    {
        cout << " " << result[i];
    }
}