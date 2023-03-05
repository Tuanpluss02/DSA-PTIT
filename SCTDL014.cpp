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

class matrix
{
public:
    ll arr[11][11];
    ll len;
    matrix()
    {
        For(i, 0, 11)
        {
            For(j, 0, 11)
            {
                arr[i][j] = 1;
            }
        }
    }
    matrix operator*(matrix b)
    {
        matrix c;
        c.len = len;
        For(i, 0, len)
        {
            For(j, 0, len)
            {
                c.arr[i][j] = 0;
                For(k, 0, len)
                {
                    c.arr[i][j] = (c.arr[i][j] + arr[i][k] * b.arr[k][j]) % Mod;
                }
            }
        }
        return c;
    }
    matrix power(matrix x, ll n)
    {
        if (n == 1)
            return x;
        if (n % 2 != 0)
            return power(x, n - 1) * x;
        matrix tmp = power(x, n / 2);
        return tmp * tmp;
    }
};

void solve()
{
    ll x, y;
    cin >> x >> y;
    matrix res;
    For(i, 0, x)
    {
        For(j, 0, x)
        {
            cin >> res.arr[i][j];
        }
    }
    res.len = x;
    res = res.power(res, y);
    ll ans = 0;
    For(i, 0, x)
    {
        For(j, 0, x)
        {
            if (j == x - i - 1)
            {
                ans += res.arr[i][j] % Mod;
            }
        }
    }
    cout << ans % Mod << endl;
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