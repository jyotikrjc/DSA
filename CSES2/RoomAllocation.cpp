#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
int main()
{
    ll n;
    cin>>n;
    vector<pair<ll,pair<ll,ll>>> a;
    for (int i = 1; i <=n ; ++i) {
        ll x,y;
        cin>>x>>y;
        a.push_back({x,{-1,i}});
        a.push_back({y,{1,i}});
    }
    sort(a.begin(),a.end());
    vector<ll> rooms;
    ll occupied=0,max_cnt=0,ans[200007];
    for (auto i:a) {
        auto p=i.second.first,id=i.second.second;
        if (p==1)
        {
            rooms.push_back(ans[id]);
        } else if (occupied==rooms.size())
        {
            ans[id]=++max_cnt;
        } else
        {
            ans[id]=rooms[occupied++];
        }
    }
    cout<<max_cnt<<"\n";
    for (int i = 1; i <=n ; ++i) {
        cout<<ans[i]<<" ";
    }
}
