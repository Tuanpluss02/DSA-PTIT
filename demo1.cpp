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

ll fib[93];
void init()
{
    fib[0] = 0;
    fib[1] = 1;
    For(i, 2, 93)
        fib[i] = fib[i - 2] + fib[i - 1];
}

char calc(int n, int k)
{
    if (n == 1)
        return 'A';
    if (n == 2)
        return 'B';
    if (k <= fib[n - 2])
        return calc(n - 2, k);
    return calc(n - 1, k - fib[n - 2]);
}

void solve()
{
    int n, k;
    cin >> n >> k;
    cout << calc(n, k) << endl;
}

int main()
{
    faster();
    init();
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
