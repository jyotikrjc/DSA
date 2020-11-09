#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
typedef vector<ll> vl ;
int mod = 1e9+7;
void lis(vector<ll> &a,ll elem)
{
    auto it=lower_bound(a.begin(),a.end(),elem);
    if (it==a.end())
    {
        a.push_back(elem);
    } else
    {
        *it=elem;
    }
}
int main() {
    ll n;
    cin>>n;
   vl v(n);
    for (int i = 0; i <n ; ++i) {
        cin>>v[i];
    }
    vector<ll> a;
    for (int i = 0; i <n ; ++i) {
        lis(a,v[i]);
    }
    cout<<a.size();
}
