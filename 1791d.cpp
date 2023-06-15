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
    ll n;
    string s;
    cin >> n;
    cin >> s;
    if (s.size() == 1)
    {
        cout << 1 << endl;
        return;
    }
    lli res = 0;
    For(i, 0, n - 1)
    {
        string tmp1 = s.substr(0, i + 1);
        string tmp2 = s.substr(i + 1, n - i - 1);
        set<char> t1 = set(tmp1.begin(), tmp1.end());
        set<char> t2 = set(tmp2.begin(), tmp2.end());
        res = max(res, t1.size() + t2.size());
    }
    cout << res << endl;
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
