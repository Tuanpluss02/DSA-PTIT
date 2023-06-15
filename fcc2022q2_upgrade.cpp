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
#define debug(x) cerr << "Line " << __LINE__ << ": " << #x << " = " << (x) << endl
#define pause() system("pause");

using namespace std;

void solve()
{
    ll n, k, x;
    cin >> n >> k;
    vec v;
    map<ll, ll> m;
    For(i, 0, n)
    {
        cin >> x;
        v.push_back(x);
        m[x]++;
    }
    for (auto &i : m)
    {
        while (i.se >= k)
        {
            m[i.fi + 1]++;
            m[i.fi] -= k;
        }
    }
    ll res = 0;
    for (auto i : m)
    {
        if (i.se > 0)
            res++;
    }
    cout << res;
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
