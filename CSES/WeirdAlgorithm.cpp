#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N=998244353;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    ll n;
    cin>>n;
    cout<<n<<" ";
    while (n>=2)
    {
        if (n%2==0)
        {
            n/=2;
        } else
        {
            n*=3;
            n+=1;
        }
        cout<<n<<" ";
    }
}
