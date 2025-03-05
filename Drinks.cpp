#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    double sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> sum;
        sum += sum;
    }
    double result = sum / n;
    cout << setprecision(14) << result;
    return 0;
}