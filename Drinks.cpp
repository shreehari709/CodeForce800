#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    double sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int p;
        cin >> p;
        sum += p;
    }
    double result = sum / n;
    cout << setprecision(12) << result;
    return 0;
}