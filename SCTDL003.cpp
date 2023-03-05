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

string num;
string nextBin()
{
  int l = num.size();
  bool check = true;
  int idx;
  for (int i = l - 1; i >= 0; i--)
  {
    if (num[i] == '0')
    {
      check = false;
      idx = i;
      break;
    }
  }
  num[idx] = '1';
  for (int i = idx + 1; i <= l; i++)
    num[i] = '0';

  if (check)
  {
    string s(l, '0');
    return s;
  }
  return num;
}

void solve()
{
  cin >> num;
  cout << nextBin() << endl;
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
