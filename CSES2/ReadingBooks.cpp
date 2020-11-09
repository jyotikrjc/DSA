#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
int main()
{
    ll n,maxval=INT_MIN,sum=0;
    cin>>n;
    vector<ll> a(n);
    for (int i = 0; i <n ; ++i) {
        cin>>a[i];
        maxval=max(maxval,a[i]);
        sum+=a[i];
    }
    ll ans=max(sum,2*maxval);
    cout<<ans;
}
