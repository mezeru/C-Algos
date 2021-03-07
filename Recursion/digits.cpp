#include <iostream>
using namespace std;

int digits(int a)
{
    static int count = 1;

    if (a > 0)
    {
        digits(a / 10);
        count++;
    }
    return count;
}

int main()
{

    int a;
    cin >> a;
    cout << digits(a);

    return 0;
}