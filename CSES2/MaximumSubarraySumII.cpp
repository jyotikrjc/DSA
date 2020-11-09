#include <bits/stdc++.h>
using namespace std;
typedef long int li;
typedef long long int ll;
template<int D, typename T> struct vec : public vector<vec<D - 1, T>> { static_assert(D >= 1, "Vector dimension must be greater than zero!");  template<typename... Args> vec(int n = 0, Args... args) : vector<vec<D - 1, T>>(n, vec<D - 1, T>(args...)) { } }; template<typename T> struct vec<1, T> : public vector<T> { vec(int n = 0, T val = T()) : vector<T>(n, val) { }};
 
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
   ll  n, a, b; cin >> n >> a >> b;
    vec<1, ll> arr(n+1);
    arr[0] = 0;
    for (ll i = 1; i <= n; ++i) { cin >> arr[i]; arr[i] += arr[i-1]; }
 
    deque<int> dq;
    ll k = b-a+1;
    ll res = LONG_MIN;
    for (ll i = 0, j = a; j <= n; ++i, ++j)
    {
        while (!dq.empty() && dq.front() < i-k+1) dq.pop_front();
        while (!dq.empty() && arr[i] < arr[dq.back()]) dq.pop_back();
        dq.push_back(i);
        res = max(res, arr[j]-arr[dq.front()]);
    }
    cout << res << '\n';
    return 0;
}
