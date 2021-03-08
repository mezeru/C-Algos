#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

unordered_map<char, int> asp(string s, int size)
{
    unordered_map<char, int> result;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'a' || s[i] == 's' || s[i] == 'p')
        {
            result[s[i]]++;
        }
    }
    return result;
}

int main()
{
    string s;
    cin >> s;

    unordered_map<char, int> result = asp(s, sizeof(s) / sizeof(s[0]));

    unordered_map<char, int>::iterator i;

    for (i = result.begin(); i != result.end(); i++)
    {
        cout << i->first << " " << i->second << "\n";
    }

    return 0;
}
