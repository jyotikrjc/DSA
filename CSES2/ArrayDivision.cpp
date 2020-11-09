#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1000000007;
ll n,k,a[500000];
bool ok(ll mid)
{
    ll curr=0,cnt=0;
    while (cnt<k && curr<n)
    {
        ll sum=0;
        while (curr<n && sum+a[curr]<=mid) sum+=a[curr++];
        cnt++;
    }
    return curr==n;
}
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n>>k;
    ll sum=0;
    for (int i = 0; i <n ; ++i) {
        cin>>a[i];
        sum+=a[i];
    }
    ll lo=0,hi=sum,mid;
    while (lo<hi)
    {
        mid=(lo+hi)/2;
        if (ok(mid)) hi=mid;
        else
            lo=mid+1;
    }
    cout<<lo;
}
