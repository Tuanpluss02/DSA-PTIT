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

void print(vector<int> v)
{
  cout << "[";
  cout << v[0];
  for (int i = 1; i < v.size(); i++)
  {
    cout << " " << v[i];
  }
  cout << "]" << endl;
}
void solve()
{
  int n;
  cin >> n;
  if (n == 0)
  {
    cout << "[]" << endl;
    return;
  }
  vector<int> v(n);
  for (int i = 0; i < n; ++i)
  {
    cin >> v[i];
  }
  while (v.size() > 0)
  {
    print(v);
    for (int i = 0; i < n - 1; i++)
    {
      v[i] = v[i] + v[i + 1];
    }
    v.pop_back();
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
