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
  ll n;
  cin >> n;
  vec v(n);
  For(i, 0, n) { cin >> v[i]; }
  sortu(v);
  string s1 = "", s2 = "";
  int i = 0;
  while (v[i] == 0)
    i++;
  if (i == n)
  {
    cout << 0 << endl;
    return;
  }
  while (i < n)
  {
    s1 += to_string(v[i]);
    s2 += (i + 1 < n ? to_string(v[i + 1]) : "");
    i += 2;
  }
  cout << stoll(s1) + stoll(s2) << endl;
}
// 0 0 3 4 5 7
// 35
// 47
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
