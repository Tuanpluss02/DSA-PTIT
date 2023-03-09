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

int cal(int res, int num, int base)
{
  int result = pow(base, num);
  if (res == result)
    return 1;
  if (res < result)
    return 0;
  int x = cal(res - result, num, base + 1);
  int y = cal(res, num, base + 1);
  return x + y;
}

void solve()
{
  int n, m;
  cin >> n >> m;
  cout << cal(n, m, 1) << endl;
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
