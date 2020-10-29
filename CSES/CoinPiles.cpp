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
    ll t,cnt=0;
    cin>>t;
    while (t--)
    {
        ll a,b;
        cin >> a >> b;
        cout << ((a + b) % 3 == 0 && (min(a, b) * 2 >= max(a, b)) ? "YES" : "NO") << endl;
    }
    return 0;
}
