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
    int n, k;
    cin >> n >> k;
    vector<int> A(n);
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    if (k == 1)
    {
        cout << n << endl;
        return;
    }
    if (k == 0)
    {
        cout << 0 << endl;
        return;
    }
    vector<int> P(n);
    P[0] = A[0];
    for (int i = 1; i < n; i++)
    {
        P[i] = P[i - 1] + A[i];
    }
    unordered_map<int, int> hash;
    hash[0] = -1;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int mod = P[i] % k;
        if (mod < 0)
            mod += k;
        if (hash.count(mod) > 0)
        {
            ans = max(ans, i - hash[mod]);
        }
        if (hash.count(mod) == 0)
        {
            hash[mod] = i;
        }
    }
    cout << ans << endl;
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
