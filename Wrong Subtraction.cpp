#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    while (k > 0)
    {
        int temp = n;
        n = n % 10;
        if (n != 0)
        {
            temp = temp - 1;
            n = temp;
            k--;
        }
        if (n == 0)
        {
            temp = temp / 10;
            n = temp;
            k--;
        }
        
    }
    cout << n;

    return 0;
}
