#include <algorithm>
#include <iostream>

using namespace std;

int findPlatform(int arr[], int dep[], int n)
{

    sort(arr, arr + n);
    sort(dep, dep + n);

    int plat_needed = 1, result = 1;
    int i = 1, j = 0;

    while (i < n && j < n)
    {
        if (arr[i] <= dep[j])
        {
            plat_needed++;
            i++;
        }

        else if (arr[i] > dep[j])
        {
            plat_needed--;
            j++;
        }

        if (plat_needed > result)
            result = plat_needed;
    }

    return result;
}

int main()
{
    int arr[] = {900, 1000, 1100, 1030, 1600};
    int dep[] = {1900, 1300, 1130, 1130, 1800};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Minimum Number of Platforms Required = "
         << findPlatform(arr, dep, n);
    return 0;
}