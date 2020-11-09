#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
int main()
{
    ll n,target;
    cin>>n>>target;
    vector<ll> a(n);
    for (ll i = 0; i <n ; ++i) {
        cin>>a[i];
    }
    ll high=1;
    while (true)
    {
        ll cnt=0;
        for (ll i :a) {
            cnt+=high/i;
        }
        if (cnt>=target)
            break;
        else
            high*=2;
    }
    ll low=0;
    for (ll i = high/2; i >=1 ; i/=2) {
        while (i+low<=high)
        {
           ll cnt=0;
            for (ll j : a) {
                cnt+=(low+i)/j;
            }
            if (cnt>=target)
                break;
            else
                low+=i;
        }
    }
    cout<<low+1;
}
