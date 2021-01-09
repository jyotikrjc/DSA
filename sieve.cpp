#include <bits/stdc++.h>
using namespace std;
const int mod =  1000000007;
typedef long long ll ;
bool prime[1000006];
void sieve(ll n)
{
      memset(prime, true, sizeof(prime));
      ll rootn = (ll)sqrt(n);
      for (ll p = 2; p <= rootn; p++)
            if(prime[p] == true)
                  for(ll i = p * p; i <= n; i += p)
                        prime[i] = false;
      prime[1] = 0;

}
