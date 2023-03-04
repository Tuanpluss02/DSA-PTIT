#include <bits/stdc++.h>

#define faster()                \
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
  string s;
  cin >> s;
  ll n = s.size();
  transform(s.begin(), s.end(), s.begin(), ::tolower);
  vector<int> v;
  For(i, 0, n)
  {
    v.pb(s[i]);
  }
  int dp[n + 1];
  fill_n(dp, n + 1, 1);
  int res = 1;
  For(i, 1, n)
  {
    For(j, 0, i)
    {
      if (v[j] + 1 == v[i])
      {

        dp[i] = max(dp[i], dp[j] + 1);
        res = max(res, dp[i]);
      }
    }
  }
  cout << res << endl;
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
