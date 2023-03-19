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

const ll MAXN = 1000;
const ll INF = 1e9;

ll cal(ll A[MAXN][MAXN], ll N, ll M)
{
    ll f[MAXN][MAXN];
    f[0][0] = A[0][0];
    for (ll i = 1; i < N; i++)
    {
        f[i][0] = f[i - 1][0] + A[i][0];
    }
    for (ll j = 1; j < M; j++)
    {
        f[0][j] = f[0][j - 1] + A[0][j];
    }
    for (ll i = 1; i < N; i++)
    {
        for (ll j = 1; j < M; j++)
        {
            f[i][j] = min(f[i - 1][j], min(f[i][j - 1], f[i - 1][j - 1])) + A[i][j];
        }
    }
    return f[N - 1][M - 1];
}

void solve()
{
    ll n, m;
    cin >> n >> m;
    ll A[MAXN][MAXN];
    For(i, 0, n)
    {
        For(j, 0, m)
        {
            cin >> A[i][j];
        }
    }
    cout << cal(A, n, m) << endl;
}

int main()
{
    faster();
    int test = 1;
    cin >> test;
    clean();
    while (test--)
    {
        solve();
    }
    // pause();
    return 0;
}
