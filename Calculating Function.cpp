#include <bits/stdc++.h>
using namespace std;

int64_t fun(int64_t n)
{
    if (n % 2 == 0)
    {
        return n / 2;
    }
    else
    {
        return -((n + 1) / 2);
    }
}

int main()
{
    int64_t n;
    cin >> n;
    cout << fun(n) << endl;
    return 0;
}
