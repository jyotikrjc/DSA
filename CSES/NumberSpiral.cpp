#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N=1e7+9;
int a[N];
void solve()
{
    ll x,y,ans;
    cin>>x>>y;
    if (x>y)
    {
        if (x%2==0)
            ans=x*x-y+1;
        else
            ans=(x-1)*(x-1)+y;
    }
    else if(y>x)
    {
        if(y%2==0)
            ans=(y-1)*(y-1)+x;
        else
            ans=y*y-x+1;
 
    } else
    {
        ans=x*x-(x-1);
    }
    cout<<ans<<"\n";
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cout.tie(0);
 
    /*#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif*/
  ll t;
  cin>>t;
  while (t--)
  {
      solve();
  }
    return 0;
}
