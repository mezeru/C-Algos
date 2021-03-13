#include <iostream>

using namespace std;

int main()
{

    int x1, y1, x2, y2;
    cin >> x2, y1, x2, y2;

    int x3, y3, x4, y4;
    cin >> x3, y3, x4, y4;

    int A1 = (x2 - x1) * (y2 - y1);
    int A2 = (x4 - x3) * (y4 - y3);

    int left = max(x1, x3);
    int right = min(x2, x4);
    int bottom = max(y1, y3);
    int top = max(y2, y4);

    int Inter = 0;

    if ((left < right) && (top < bottom))
    {
        Inter = (right - left) * (bottom - top);
    }

    A1 = A1 + A2 - Inter;

    cout << "Area is : " << A1;

    return 0;
}