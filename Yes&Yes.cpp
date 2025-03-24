#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string arr[n];
    string s;
    for(int i=0;i<n;i++){
        cin>>s;
        //if(s[0]=='Y' || s[0]=='y' && s[1]=='e' || s[1]=='E' && s[2]=='s' || s[2]=='S')
        if(s=="YES" || s=="YeS" || s=="YEs" || s=="yes" || s=="Yes" || s=="yEs" || s=="yeS" || s=="yES")
        {
        	arr[i]="YES";
		}else{
			arr[i]="NO";
		}
    }for(int i=0;i<n;i++){
    	cout<<arr[i]<<endl;
	}
    
    return 0;
}