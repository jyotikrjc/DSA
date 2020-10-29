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
    ll n,target,ans1,ans2=-1;
    cin>>n>>target;
   vector<pair<ll,ll>> arr;
    for (ll i = 0; i <n ; ++i) {
        ll x;
        cin>>x;
        arr.push_back({x,i});
    }
    sort(arr.begin(),arr.end());
    for (int i = 0,j=n-1; i <j ; ) {
    if (arr[i].first+arr[j].first>target)
    {
        j--;
    }
    else if(arr[i].first+arr[j].first<target)
    {
        i++;
    } else{
        ans1=arr[i].second+1;
        ans2=arr[j].second+1;
        break;
    }
    }
    if (ans2==-1)
        cout<<"IMPOSSIBLE";
    else
        cout<<ans2<<" "<<ans1;
    return 0;
}
