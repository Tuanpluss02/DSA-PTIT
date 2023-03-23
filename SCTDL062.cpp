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

ll N, K, S, cou;
vec A;

void backtrack(int pos, int k, int cur_sum)
{
    if (k == K && cur_sum == S)
    {
        cou++;
        return;
    }
    if (pos == N || k > K || cur_sum > S)
    {
        return;
    }
    backtrack(pos + 1, k + 1, cur_sum + A[pos]);
    backtrack(pos + 1, k, cur_sum);
}

void solve()
{
    cin >> N >> K >> S;
    A.resize(N);
    For(i, 0, N)
    {
        cin >> A[i];
    }
    cou = 0;
    backtrack(0, 0, 0);
    cout << cou << endl;
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
