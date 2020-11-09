#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
int main()
{
    ll n,maxi=0,cnt=0,x;
    cin>>n;
   vector<ll> a(n);
    for (int i = 0; i <n ; ++i) {
        cin>>a[i];
    }
    map<ll,ll> b;
    for (int i = 0; i <n ; ++i) {
        if (b.find(a[i])==b.end())
        {
            cnt+=1;
            b[a[i]]=i;
        }
        else
        {
            ll x=b[a[i]];
            maxi=max(maxi,cnt);
            cnt=min(i-x,cnt+1);
            b[a[i]]=i;
        }
    }
    maxi=max(maxi,cnt);
    cout<<maxi;
}
