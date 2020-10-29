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
    cin >> n;
    ll a, sum = 0;
 
    for (ll i = 0; i < n - 1; i++)
    {
        cin >> a ;
        sum = sum + a;
    }
    cout << (n * (n + 1) / 2) - sum << endl;
 
 
    return 0;
}
