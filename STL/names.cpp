#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

int main()
{
    string s, word;
    cin >> s;
    unordered_map<string, int> result;
    vector<string> names;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ')
        {
            names.push_back(word);
            word = "";
        }
        else
        {
            word = word + s[i];
        }
    }

    for (int i = 0; i < names.size(); i++)
    {
        result[names[i]]++;
    }

    unordered_map<string, int>::iterator i;

    if (result.size() == names.size())
    {
        cout << "No Repeating Name";
    }

    for (i = result.begin(); i != result.end(); i++)
    {
        if (i->second > 1)
        {
            cout << i->first << " : " << i->second << "\n";
        }
    }
}