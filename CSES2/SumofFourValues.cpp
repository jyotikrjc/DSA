#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
typedef pair<ll,ll> pi ;
int main()
{
    ll n,targetsum;
    cin>>n>>targetsum;
    vector<pi> b;
    for (int i = 0; i <n ; ++i) {
        ll x;
        cin>>x;
        b.push_back({x,i+1});
    }
    sort(b.begin(),b.end());
    if (n<4) { cout<<"IMPOSSIBLE"; return 0;}
    for (ll i = 0; i <n-3; ++i) {
        for (int j = i+1; j <n-2 ; ++j) {
            ll k=j+1,l=n-1;
            while (k<l)
            {
                ll sum=b[i].first+b[j].first+b[k].first+b[l].first;
                if (sum==targetsum){
                    cout<<b[i].second<<" "<<b[j].second<<" "<<b[k].second<<" "<<b[l].second;
                    return 0;
                }
                else if (sum>targetsum)
                {
                    l--;
                }
                else
                {
                    k++;
                }
 
            }
        }
    }
    cout<<"IMPOSSIBLE";
}
