#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, count = 0, a, b, c;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b >> c;
        if (a < b && b < c)
        {
            arr[i] = 0;
        }
        else if (a < b && b > c)
        {
            arr[i] = 1;
        }
        else
        {
            arr[i] = 2;
        }
    }
    for (int a : arr)
    {
        if (a == 0)
        {
            cout << "STAIR" << endl;
        }
        else if (a == 1)
        {
            cout << "PEAK" << endl;
        }
        else
        {
            cout << "NONE" << endl;
        }
    }

    return 0;
}
