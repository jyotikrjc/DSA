#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N=1e9+7;
#define lli long long int
#define li long int
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cout.tie(0);
    /*#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif*/
    lli n,x=1;
    cin >> n;
   while (n--)
   {
     x=x*2;
     x%=N;
   }
   cout<<x;
    return 0;
}
