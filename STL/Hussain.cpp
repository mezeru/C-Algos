#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int main()
{
    vector<int> input;
    queue<int> q;

    int n, m, inp;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        cin >> inp;
        input.push_back(inp);
    }

    int count_m = 0;
    int ans;
    int end_p = input.size() - 1;

    sort(input.begin(), input.end());

    while (m--)
    {
        int curr_m;
        cin >> curr_m;
        for (; count_m < curr_m; count_m++)
        {
            if (end_p >= 0 && (input[end_p] >= q.front() || q.empty()))
            {
                ans = input[end_p];
                end_p--;
            }
            else
            {
                ans = q.front();
                q.pop();
            }
            q.push(ans / 2);
        }
        cout << curr_m << " : " << ans << endl;
    }

    return 0;
}