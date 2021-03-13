#include <iostream>
using namespace std;

int main()
{

    int n, inp, arr[10];
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> inp;
        arr[i] = inp;
    }

    for (int i = 0, a = 0; i <= n / 2; i++)
    {
        a = arr[0] + arr[n - 1 - i];
        cout << a / 10 << " " << (a % 10) << endl;
    }

    return 0;
}
