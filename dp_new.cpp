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
    ll n, k;
    cin >> n >> k;
    ll dp[n + 2][k + 2];
    For(i, 0, n + 1)
        For(j, 0, k + 1)
            dp[i][j] = 0;

    For(i, 0, 9) if (i <= k)
        dp[1][k] = i;

    For(i, 2, n + 1)
    {
        For(j, 0, k + 1)
        {
            For(x, 0, 10)
            {
                if (j - x >= 0)
                    dp[i][j] += dp[i - 1][j - x];
            }
        }
    }

    cout << dp[n][k] << endl;
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
