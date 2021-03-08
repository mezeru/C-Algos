#include <iostream>
#include <unordered_map>
using namespace std;

char non_repeat(string s, int size)
{
    unordered_map<char, int> hash;

    for (int i = 0; i < size; i++)
    {
        hash[s[i]] = hash[s[i]] + 1;
    }

    for (int i = 0; i < size; i++)
    {
        if (hash[s[i]] == 1)
        {
            return s[i];
        }
    }
    return -1;
}

int main()
{
    string s;
    cin >> s;

    char ans = non_repeat(s, s.size());
    cout << "The First Non repeating char is : " << ans;

    return 0;
}
