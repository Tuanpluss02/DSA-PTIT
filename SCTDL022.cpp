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

vec fb(93);
void init()
{
  fb[0] = 0;
  fb[1] = 1;
  For(i, 2, 93)
  {
    fb[i] = fb[i - 1] + fb[i - 2];
  }
  rev(fb);
}
ll cal(int n, int k)
{
  if (n == 0)
    return 1;
  if (k == 0)
    return 0;
  if (n < 0)
    return 0;
  ll res = 0;
  For(i, 0, k)
  {
    if (n >= fb[i])
    {
      res += cal(n - fb[i], i);
    }
  }
  return res;
}

void solve()
{
  int n;
  cin >> n;
  cout << cal(n, 93) << endl;
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
