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
ll c[1001][1001];

void init()
{
  For(i, 0, 1001) c[i][0] = 1;
  For(i, 1, 1001) c[i][1] = 1;
  For(i, 1, 1001)
  {
    For(j, 1, 1001)
    {
      
      c[i][j] = c[i - 1][j - 1] + c[i - 1][j] % Mod;
    }
  }
}

void solve()
{
  int n, k;
  cin >> n >> k;
  cout << c[n][k] << endl;
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
  //pause();
  return 0;
}
