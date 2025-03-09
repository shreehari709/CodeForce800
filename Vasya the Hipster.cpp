#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int r, b;
    cin >> r >> b;

    if (r > b)
    {
        r = (r - b) / 2;
        cout << b << " " << r;
    }
    else if (b > r)
    {
        b = (b - r) / 2;
        cout << r << " " << b;
    }
    else if (r == b)
    {
        cout << r << " " << 0;
    }

    return 0;
}