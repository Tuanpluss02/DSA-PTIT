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
vector<string> genBin(int N)
{
  vector<string> res;
  for (int i = 0; i < (1 << N); i++)
  {
    string binstr = bitset<32>(i).to_string().substr(32 - N);
    int count = 0;
    for (int j = 0; j < N - 1; j++)
    {
      if (binstr[j] == '0' && binstr[j + 1] == '1')
      {
        count++;
      }
    }
    if (count == 2)
    {
      res.pb(binstr);
    }
  }
  return res;
}
void solve()
{
  int n;
  cin >> n;
  vector<string> res = genBin(n);
  sortd(res);
  for (int i = 0; i < res.size(); i++)
  {
    cout << res[i] << " ";
  }
  cout << endl;
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
