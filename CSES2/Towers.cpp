#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
int main()
{
    ll n,maxi=0,cnt=1,x;
    cin>>n;
    vector<ll> a;
    for (int i = 0; i <n ; ++i) {
        ll x;
        cin>>x;
       auto it=upper_bound(a.begin(),a.end(),x);
        if (it==a.end())
        {
            a.push_back(x);
        }
        else
        {
            *it=x;
        }
    }
    cout<<a.size();
    return 0;
}
