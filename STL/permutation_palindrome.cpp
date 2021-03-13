#include <iostream>
#include <map>
#include <vector>
#include <string>

using namespace std;

vector<int> result;

bool check_palin(map<char, vector<int>> data)
{
    int odd_check = 0;

    for (int i = 0; i < data.size(); i++)
    {
        if (odd_check < 2)
        {
            if (data[i].size() % 2 != 0)
            {
                odd_check++;
            }
        }
        else
        {
            return false;
        }
    }
    return true;
}

void make_palin(map<char, vector<int>> data, string s)
{
    int start_p, i = 0;
    int end_p = s.size() - 1;
    int m = (s.size() + 1) / 2;
    vector<int> type;

    while (start_p != end_p)
    {
        if (data[i].size() % 2 == 0)
        {
            type = data[i];
            result[start_p] = type[0];
            result[end_p] = type[1];
            i++;
            start_p++;
            end_p--;
        }
        else
        {
            type = data[i];
            result[m] = s[0];
            result[m + 1] = s[1];
            result[m - 1] = s[2];
            i++;
        }
    }
}

int main()
{

    string s;
    cin >> s;

    map<char, vector<int>> data;

    for (int i = 0; i < s.size(); i++)
    {
        data[s[i]].push_back(i);
    }

    bool palin = check_palin(data);

    if (palin)
    {
        make_palin(data, s);

        for (int i = 0; i < result.size(); i++)
        {
            cout << " " << result[i];
        }
    }
    else
    {
        cout << "The Palindrome is not possible";
    }
}