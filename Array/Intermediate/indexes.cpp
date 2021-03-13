#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, inp, even = 0, odd = 0;
    cin >> n;
    vector<int> arr;

    for (int i = 0; i < n; i++)
    {
        cin >> inp;

        if (i % 2 == 0 && inp % 2 == 0)
        {
            even = even + inp;
        }

        else if (i % 2 != 0 && inp % 2 != 0)
        {
            odd = odd + inp;
        }
    }

    cout << even << " " << odd;

    return 0;
}
