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
      if (s.length()==2 && s[0]!=s[1])
          cout<<"NO SOLUTION";
      else
      {
          map<char,ll> map;
          vector<char> s1;
          for (int i = 0; i <s.length() ; ++i) {
              map[s[i]]+=1;
          }
          string t="";
          for (auto i = map.begin(); i != map.end() ; ++i) {
              ll cnt=i->second;
              if (cnt%2==1)
              {
                  if (s1.empty())
                    s1.push_back(i->first);
                  else
                  {
                      cout<<"NO SOLUTION";
                      return 0;
                  }
              }
              for (int j = 1; j <=cnt/2 ; ++j) {
                  t+=i->first;
              }
          }
          string s2=t;
          reverse(s2.begin(),s2.end());
          for (int i = 0; i <s1.size() ; ++i) {
              t+=s1[i];
          }
          t+=s2;
          cout<<t;
      }
 
    return 0;
}
