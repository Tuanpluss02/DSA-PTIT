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

ll nCr[1000][1000] = {0};

void process()
{
  int k;
  for (int i = 0; i < 1000; i++)
  {
    nCr[i][0] = nCr[i][i] = 1;
    k = i >> 1;
    for (int j = 1; j <= k; j++)
    {
      nCr[i][j] = nCr[i][i - j] = (nCr[i - 1][j] + nCr[i - 1][j - 1]) % Mod;
    }
  }
}

void solve()
{
  ll n, k;
  cin >> n >> k;
  cout << nCr[n][k] << endl;
}

int main()
{
  faster();
  process();
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
