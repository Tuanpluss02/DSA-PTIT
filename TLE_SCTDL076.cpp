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

bool nextBin(string &num)
{
  string s = num;
  int l = num.size();
  for (int i = l - 1; i >= 0; i--)
  {
    if (num[i] == '0')
    {
      num[i] = '1';
      break;
    }
    else
      num[i] = '0';
    if (i < 0)
      num = "1" + num;
  }
  return num != s;
}

bool check(string s)
{
  for (char i : s)
  {
    if (i == '1')
      return false;
  }
  return true;
}

void solve()
{
  ll n, m;
  cin >> n >> m;
  string s;
  clean();
  cin >> s;
  if (m == 0)
  {
    cout << s << endl;
    return;
  }
  m++;
  do
  {
    if (check(s))
    {
      for (char &i : s)
        i = '0';
    }
    if (m == 0)
    {
      cout << s << endl;
      return;
    }
  } while (nextBin(s) and m-- > 0);
  // cout << m;
  // cout << s << endl;
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
