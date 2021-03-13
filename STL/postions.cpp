#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    map<int, string> student;

    int n, score, mark;
    string name;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        score = 0;
        cin >> name;
        for (int j = 0; j < 3; j++)
        {
            cin >> mark;
            score = score + mark;
        }
        student[score] = name;
    }

    map<int, string>::iterator i;
    int count = 0;
    i = --student.end();
    for (; count < n; i--)
    {
        cout << ++count << " : " << i->second << "\n";
    }

    return 0;
}
