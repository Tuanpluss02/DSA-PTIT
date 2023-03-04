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

bool dfs(int curr, int parent, vector<int> adj[], vector<bool> &vis)
{
  vis[curr] = true;
  // cout << curr << " ";
  for (auto child : adj[curr])
  {
    if (vis[child] == true && child != parent)
      return false;
    else if (!vis[child])
    {
      dfs(child, curr, adj, vis);
    }
  }
  return true;
}

void solve()
{
  int n, x, y;
  cin >> n;
  vector<bool> vis(n, false);
  vector<int> g[1500];
  For(i, 0, n - 1)
  {
    cin >> x >> y;
    g[x].pb(y);
    g[y].pb(x);
  }

  cout << (dfs(1, -1, g, vis) ? "YES" : "NO") << '\n';
  // For(i, 0, n) cout << vis[i] << "\n";
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
