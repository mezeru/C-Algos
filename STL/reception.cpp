#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<int> arri, depa;
    int no, inp;
    cin >> no;

    for (int i = 0; i < no; i++)
    {
        cin >> inp;
        arri.push_back(inp);
    }

    for (int i = 0; i < no; i++)
    {
        cin >> inp;
        depa.push_back(inp);
    }

        return 0;
}