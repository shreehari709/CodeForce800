#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k, n, w, sum = 0;
    cin >> k >> n >> w;

    sum = (w * (w + 1) / 2) * k;

    cout << max(0, sum - n) << endl;

    return 0;
}