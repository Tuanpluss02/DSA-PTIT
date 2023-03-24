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

void cal(ll n, vec &way, vector<vec> &ways)
{
    if (n == 0)
    {
        ways.push_back(way);
        return;
    }
    for (ll i = 1; i <= n; i++)
    {
        if (way.empty() || i <= way.back())
        {
            way.push_back(i);
            cal(n - i, way, ways);
            way.pop_back();
        }
    }
}

void solve()
{
    ll n;
    cin >> n;
    vec way;
    vector<vec> ways;
    cal(n, way, ways);
    rev(ways);
    for (auto w : ways)
    {
        cout << "(";
        for (int i = 0; i < w.size(); i++)
        {
            cout << w[i];
        }
        cout << ")";
    }
    cout << endl;
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
