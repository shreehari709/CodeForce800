#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<string> arr;

    int original_t = t;

    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if (a + b == c || a + c == b || b + c == a)
        {
            arr.push_back("YES");
        }
        else
        {
            arr.push_back("NO");
        }
    }

    // Print stored results
    for (int i = 0; i < original_t; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}
