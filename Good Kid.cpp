#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    vector<int> arr;
    cin >> t;
        for(int i=0;i<t;i++){
            cin>>n;
            vector<int> a(n);
            for(int j=0;j<n;j++){
                cin>>a[j];
            }
            sort(a.begin(), a.end());
            int temp=a[0];
            temp=temp+1;
            a[0]=temp;
           int mul = 1;
            for(int j=0;j<n;j++){
                mul = mul * a[j];               
            }
            arr.push_back(mul);
        }
        for(int j=0;j<arr.size();j++){
            cout << arr[j] <<endl;
        }
    return 0;
}
