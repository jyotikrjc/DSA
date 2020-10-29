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
    ll n,cnt=0;
    cin>>n;
    for (int i = 5; n/i>=1 ; i=i*5) {
        cnt+=n/i;
    }
    cout<<cnt;
    return 0;
}
