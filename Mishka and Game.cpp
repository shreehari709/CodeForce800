
#include <iostream>
using namespace std;
int main()
{
    int n, msum = 0, csum = 0;
    cin >> n;
    // int m[2];
    // int c[2];
    int i = 0;
    while (i < n)
    {

        int mi, ci;
        cin >> mi >> ci;
        if (mi > ci)
        {
            msum++;
        }
        else if (ci > mi)
        {
            csum++;
        }
        i++;
    }
    if (csum > msum)
    {
        cout << "Chris";
    }
    else if (msum > csum)
    {
        cout << "Mishka";
    }
    else if (msum == csum)
    {
        cout << "Friendship is magic!^^";
    }
    return 0;
}
