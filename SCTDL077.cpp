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
  int n, x;
  cin >> n;
  string s, cp;
  For(i, 0, n)
  {
    cin >> x;
    s += to_string(x);
  }
  For(i, 0, n)
  {
    cin >> x;
    cp += to_string(x);
  }
  int res = 0;
  if (s == cp)
  {
    cout << 0 << endl;
    return;
  }
  else
  {
    do
    {
      if (s == cp)
        break;
      res++;
    } while (next_permutation(s.begin(), s.end()));
    cout << res << endl;
  }
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
