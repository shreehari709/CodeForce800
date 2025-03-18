#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    vector<long long> results(t); 

    for (int test = 0; test < t; test++) {
        int n;
        cin >> n;

        vector<int> x(n);
        for (int i = 0; i < n; i++) {
            cin >> x[i];
        }

        int minElement = *min_element(x.begin(), x.end()); 

        long long totalCandiesEaten = 0; 
        for (int i = 0; i < n; i++) {
            totalCandiesEaten += (x[i] - minElement);
        }

        results[test] = totalCandiesEaten; 
    }

    
    for (const auto &result : results) {
        cout << result << endl;
    }

    return 0;
}
