#include <bits/stdc++.h>

#define faster()                  \
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
vec g[1001];
vector<bool> vis(1001, false);
vec trace(1001, 0);
void dfs(int u, int n)
{
    vis[u] = true;
    trace.pb(u);
    if (u == n)
        return;
    for (int v : g[u])
    {
        if (!vis[v])
        {
            dfs(v, n);
            if (vis[n])
                return;
        }
    }
    trace.pop_back();
}

void bfs(int s, int n)
{
    queue<int> q;
    q.push(s);
    vis[s] = true;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (int v : g[u])
        {
            if (!vis[v])
            {
                vis[v] = true;
                q.push(v);
                trace.pb(v);
                if (v == n)
                    return;
            }
        }
    }
}

void shortestPath(int s, int n)
{
    queue<int> q;
    q.push(s);
    vis[s] = true;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (int v : g[u])
        {
            if (!vis[v])
            {
                vis[v] = true;
                q.push(v);
                trace[v] = u;
                // trace.pb(v);
                if (v == n)
                    return;
            }
        }
    }
}

void solve()
{
    int n, k, s, f;
    cin >> n >> k >> s >> f;
    For(i, 0, k)
    {
        int u, v;
        cin >> u >> v;
        g[u].pb(v);
        // g[v].pb(u);
    }
    // trace.pb(s);
    shortestPath(s, f);
    if (!vis[f])
    {
        cout << -1 << endl;
        return;
    }
    // for (auto i : trace)
    //     cout << i << " ";
    vec tmp;
    for (int i = f; i != s; i = trace[i])
        tmp.pb(i);
    tmp.pb(s);
    rev(tmp);
    for (auto i : tmp)
        cout << i << " ";
    cout << endl;
    vis.assign(1001, false);
    for (int i = 1; i <= n; i++)
        g[i].clear();
    trace.clear();
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
