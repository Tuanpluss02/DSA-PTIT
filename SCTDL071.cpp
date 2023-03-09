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
void pro(ll arr[], ll n)
{
  sort(arr, arr + n, greater<int>());
  ll output[n];
  ll i = 0, j = n - 1, k = 0;
  while (i <= j)
  {
    output[k] = arr[i];
    i++;
    k++;
    if (i <= j)
    {
      output[k] = arr[j];
      j--;
      k++;
    }
  }
  while (k < n)
  {
    output[k] = arr[i];
    i++;
    k++;
  }
  for (int i = 0; i < n; i++)
  {
    cout << output[i] << " ";
  }
  cout << endl;
}

void solve()
{
  ll n;
  cin >> n;
  ll arr[n];
  For(i, 0, n) cin >> arr[i];
  pro(arr, n);
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
