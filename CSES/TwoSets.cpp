#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N=1e7+9;
#define lli long long int
#define li long int
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cout.tie(0);
    /*#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif*/
    lli n;
    cin >> n;
    lli total = n * (n + 1) / 2;
    if (total & 1)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES" << endl;
        vector<lli> arr1, arr2;
        total /= 2LL;
        while (n)
        {
            if (total - n >= 0)
            {
                arr1.push_back(n);
                total -= n;
            }
            else
            {
                arr2.push_back(n);
            }
            n--;
        }
        cout << arr1.size() << endl;
        for (li ele : arr1)
            cout << ele << " ";
        cout << endl;
        cout << arr2.size() << endl;
        for (li ele : arr2)
            cout << ele << " ";
    }
    return 0;
}
