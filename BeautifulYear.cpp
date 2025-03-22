#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (true) {
        n++; 
        int temp = n;
        
        int* digits = new int[4];
        
        
        for (int i = 3; i >= 0; i--) {
            digits[i] = temp % 10;
            temp /= 10;
        }

        
        if (digits[0] != digits[1] && digits[0] != digits[2] && digits[0] != digits[3] &&
            digits[1] != digits[2] && digits[1] != digits[3] && digits[2] != digits[3]) {
            cout << n << endl;
            delete[] digits;  
            break;
        }

        delete[] digits;  
    }

    return 0;
}
