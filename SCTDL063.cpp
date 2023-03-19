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

ll cal(ll arr[], ll n, ll k)
{
    unordered_map<ll, ll> um;
    ll res = 0;
    ll csum = 0;

    for (ll i = 0; i < n; i++)
    {
        csum += arr[i];

        ll mod = ((csum % k) + k) % k;
        if (mod == 0)
            res = i + 1;
        else if (um.find(mod) == um.end())
            um[mod] = i;

        else if (res < (i - um[mod]))
            res = i - um[mod];
    }
    return res;
}

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll v[n];
    For(i, 0, n) cin >> v[i];
    if (k == 0)
    {
        cout << 0 << endl;
        return;
    }
    if (k == 1)
    {
        cout << n << endl;
        return;
    }
    cout << cal(v, n, k) << endl;
}

int main()
{
    faster();
    int test = 1;
    cin >> test;
    // clean();
    while (test--)
    {
        solve();
    }
    // pause();
    return 0;
}
