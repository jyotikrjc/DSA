#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
int main()
{
    ll n,total=0,candidate=0,x;
    cin>>n;
    vector<ll> a(n);
    for (int i = 0; i <n ; ++i) {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    candidate=(a[n/2]);
    for (int j = 0; j <n ; ++j) {
        total+=abs(candidate-a[j]);
    }
    cout<<total;
}
