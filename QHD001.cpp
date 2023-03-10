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
#define pause() system("pause");

using namespace std;

ll dp[20][180];

void conv(ll x, vec &digit)
{
  while (x > 0)
  {
    digit.pb(x % 10);
    x /= 10;
  }
}

ll cal(int idx, int sum, bool check, vec &digit)
{
  if (idx == -1)
  {
    return sum;
  }

  if (dp[idx][sum] != -1 && !check)
  {
    return dp[idx][sum];
  }

  ll ans = 0;
  int k = (check ? digit[idx] : 9);

  for (int i = 0; i <= k; i++)
  {
    int rcheck = (digit[idx] == i) ? check : 0;
    ans += cal(idx - 1, sum + i, rcheck, digit);
  }

  if (!check)
  {
    dp[idx][sum] = ans;
  }

  return ans;
}

void solve()
{
  ll a, b;
  cin >> a >> b;
  memset(dp, -1, sizeof(dp));
  vec digitA, digitB;
  conv(a - 1, digitA);
  conv(b, digitB);
  cout << cal(digitB.size() - 1, 0, true, digitB) - cal(digitA.size() - 1, 0, true, digitA) << endl;
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
  //pause();
  return 0;
}
