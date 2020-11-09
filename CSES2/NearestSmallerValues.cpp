#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
typedef pair<ll,ll> pi ;
int main()
{
    ll n;
    cin>>n;
    vector<ll> a;
    stack<pair<ll,ll>> s;
    for (int i = 0; i <n ; ++i) {
        ll x;
        cin>>x;
        if (s.empty())
        {
            a.push_back(0);
            s.push({x,i+1});
        } else
        {
            while (!s.empty() && s.top().first>=x)
            {
                s.pop();
            }
            if (s.empty())
                a.push_back(0);
            else
                a.push_back(s.top().second);
            s.push({x,i+1});
        }
    }
    for (ll i :a) {
     cout<<a[i]<<" ";
    }
}
