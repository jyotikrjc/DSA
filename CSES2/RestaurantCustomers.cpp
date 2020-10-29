#include <bits/stdc++.h>
#define ll long long int
#define l long int
#define ld long double
using namespace std;
bool comp(pair<ll ,ll> p1,pair<ll,ll> p2)
{
    if (p1.second==p2.second)
        return p1.first<p2.first;
    return p1.second<p2.second;
}
int main()
{ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, x, y, max_people = 0, curr_people = 0;
    vector<pair<int, bool>> arr;
    cin >> n;
    while (n--)
    {
        cin >> x >> y;
        arr.push_back(make_pair(x, true));
        arr.push_back(make_pair(y, false));
    }
    sort(arr.begin(), arr.end());
    for (int i = 0; i < arr.size(); i++)
    {
        curr_people += arr[i].second ? 1 : -1;
        max_people = max(max_people, curr_people);
    }
    cout << max_people;
    return 0;
}
