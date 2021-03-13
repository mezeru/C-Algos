#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> result;
    int cases, n, inp;
    int sum;

    cin >> cases;
    for (int i = 0; i < cases; i++)
    {
        sum = 0;
        cin >> n;

        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                cin >> inp;

                if (k == 0 || k == n - 1 || j == 0 || j == n - 1 || j == k || j + k == n - 1)
                {
                    sum = sum + inp;
                }
            }
        }

        result.push_back(sum);
    }

    for (int i = 0; i < cases; i++)
    {
        cout << result[i] << endl;
    }

    return 0;
}
