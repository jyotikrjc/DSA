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
 
    ll n;
    cin>>n;
    for (ll i = 1; i <=n ; ++i) {
        cout<<((i*i)*((i*i)-1)/2)-(4*(i-1)*(i-2))<<"\n";
    }
}
