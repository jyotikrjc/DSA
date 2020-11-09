#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
    int n, x; cin >> n >> x;
    ll sum = 0, ans = 0;
    map<ll, int> mp;
    mp[0] = 1;
    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        sum += a;
        ans += mp[sum - x];
        mp[sum]++;
 
    }
    cout << ans << "\n";
}
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
 
    int tc; tc = 1;
    for (int t = 1; t <= tc; t++) {
        solve();
    }
}
