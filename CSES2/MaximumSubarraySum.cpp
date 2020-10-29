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
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
   vector<ll> arr(n);
    for (ll i = 0; i <n ; ++i) {
       cin>>arr[i];
    }
  ll ans=0,maxi=INT_MIN;
    for (int i = 0; i <n ; ++i) {
        ans=max(arr[i],ans+arr[i]);
        maxi=max(maxi,ans);
    }
    cout<<maxi;
    return 0;
}
