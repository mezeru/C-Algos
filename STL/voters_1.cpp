#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main()
{

    vector<int> l1, l2, l3;
    int n1, n2, n3;
    unordered_map<int, int> final;

    cin >> n1 >> n2 >> n3;
    int inp;

    for (int i = 0; i < n1; i++)
    {
        cin >> inp;
        l1.push_back(inp);
    }

    for (int i = 0; i < n2; i++)
    {
        cin >> inp;
        l2.push_back(inp);
    }

    for (int i = 0; i < n3; i++)
    {
        cin >> inp;
        l3.push_back(inp);
    }

    // map inp

    cout << "The ID allowed are : ";

    unordered_map<int, int>::iterator i;
    for (i = final.begin(); i != final.end(); i++) //
    {
        if (i->second > 1)
        {
            cout << i->first << endl;
        }
    }

    return 0;
}