#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main()
{
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll n,cnt=0;
    cin>>n;
    while (n>0)
    {
        ll g=n,maxi=0;
        while (g>0)
        {
            maxi=max(maxi,g%10);
            g/=10;
        }
        n-=maxi;
        cnt+=1;
    }
    cout<<cnt;
    return 0;
}
