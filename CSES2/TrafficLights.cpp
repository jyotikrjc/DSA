#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
int main()
{
    ll n,x,left,right;
    cin>>x>>n;
    set<ll> b={0,x};
    multiset<ll> a={x};
    for (int i = 0; i <n ; ++i) {
        ll p;
        cin>>p;
        auto it=b.upper_bound(p);
        left=*prev(it);
        right=*it;
        a.erase(a.find(right-left));
        a.insert(p-left);
        a.insert(right-p);
        b.insert(it,p);
        cout<<*a.rbegin()<<" ";
    }
    return 0;
}
