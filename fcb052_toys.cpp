#include <bits/stdc++.h>

#define faster()                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define clean() cin.ignore(numeric_limits<streamsize>::max(), '\n');
#define pb push_back
#define fi first
#define se second
#define Mod 1000000007
#define ld long double
#define ll long long
#define lli unsigned long long int
#define For(i, a, b) for (ll i = a; i < b; ++i)
#define Forr(i, a, b) for (ll i = a; i >= b; --i)
#define vec vector<ll>
#define sortu(c) sort(c.begin(), c.end())
#define sortd(c) sort(c.rbegin(), c.rend())
#define rev(c) reverse(c.begin(), c.end())
#define pause() system("pause");

using namespace std;

void solve()
{
    ll n, m, x;
    cin >> n >> m;
    map<ll, ll> mp;
    vec res;
    For(i, 0, n)
    {
        cin >> x;
        mp[x] = 1;
    }
    ll sum = 0;
    For(i, 1, m + 1)
    {
        // cout << i<< ' ' << m << endl;
        if (mp[i])
            continue;
        if (m - i >= 0)
        {
            m -= i;
            res.pb(i);
        }
        else
            break;
    }
    cout << res.size() << endl;
    for (auto i : res)
        cout << i << " ";
}

int main()
{
    faster();
    int test = 1;
    // cin >> test;
    // clean();
    while (test--)
    {
        solve();
    }
    // pause();
    return 0;
}
