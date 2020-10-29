#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N=1e9+7;
#define lli long long int
#define li long int
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cout.tie(0);
    /*#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif*/
 
      string s;
      cin>>s;
      sort(s.begin(),s.end());
      vector<string> p;
      do{
          p.push_back(s);
      }while (next_permutation(s.begin(),s.end()));
      cout<<p.size()<<"\n";
    for (int i = 0; i <p.size() ; ++i) {
        cout<<p[i]<<"\n";
    }
    return 0;
}
