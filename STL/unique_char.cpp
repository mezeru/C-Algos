#include <iostream>
#include <set>
#include <string>

using namespace std;

int main()
{
    set<char> letters;
    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        if (letters.find(s[i]) == letters.end())
        {
            letters.insert(s[i]);
        }
    }

    set<char>::iterator it;

    for (it = letters.begin(); it != letters.end(); it++)
    {
        cout << *it << "\t";
    }

    return 0;
}