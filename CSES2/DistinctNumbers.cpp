#include <bits/stdc++.h>
#define ll long long int
#define l long int
#define ld long double
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
   set<ll> a;
    for (int i = 0; i <n ; ++i) {
        ll x;
        cin>>x;
        a.insert(x);
    }
    cout<<a.size();
    return 0;
}
