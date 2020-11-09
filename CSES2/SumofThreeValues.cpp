#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
int main()
{
    ll n,targetsum;
    cin>>n>>targetsum;
    vector<pair<ll,ll>> a;
    for (int i = 0; i <n ; ++i) {
        ll x;
        cin>>x;
        a.push_back({x,i+1});
    }
    sort(a.begin(),a.end());
    for (ll i = 0; i <n-2 ; ++i) {
        ll j=i+1,k=n-1;
        while (j<k)
        {
            ll sum=a[j].first+a[k].first+a[i].first;
            if (sum==targetsum)
            {
                cout<<a[j].second<<" "<<a[k].second<<" "<<a[i].second;
                return 0;
            } else if (sum>targetsum)
            {
                k--;
            } else
            {
                j++;
            }
        }
    }
    cout<<"IMPOSSIBLE";
}
