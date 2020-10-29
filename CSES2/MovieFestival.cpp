#include <bits/stdc++.h>
#define ll long long int
#define l long int
#define ld long double
using namespace std;
bool comp(pair<ll,ll> a,pair<ll,ll> b)
{
    if (a.second==b.second)
        return a.first<b.first;
    return a.second<b.second;
}
int main()
{ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<pair<ll,ll>> arr;
    for (ll i = 0; i <n ; ++i) {
        ll x,y;
        cin>>x>>y;
        arr.push_back({x,y});
    }
    sort(arr.begin(),arr.end(),comp);
    ll i=1,cnt=1,people=1,maxi=arr[0].second;
    while (i<n)
    {
        if (arr[i].first>=maxi)
        {
            people++;
            maxi=arr[i].second;
        }
        i++;
        cnt=max(cnt,people);
    }
    cout<<cnt;
    return 0;
}
