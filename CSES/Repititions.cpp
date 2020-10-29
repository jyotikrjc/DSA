#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N=1e7+9;
int a[N];
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cout.tie(0);
 
    /*#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif*/
   string str;
   cin>>str;
   ll maxi=1,l=1;
    for (int i = 1; i <str.length() ; ++i) {
        if(str[i]==str[i-1])
            l+=1;
        else
            l=1;
        maxi=max(maxi,l);
    }
    cout<<maxi;
    return 0;
}
