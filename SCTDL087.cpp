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
const int MAX = 100000;

ll back(ll S, ll T)
{
    ll dist[MAX];
    ll q[MAX], front, rear;
    for (ll i = 0; i < MAX; i++)
    {
        dist[i] = -1;
    }
    q[0] = S;
    dist[S] = 0;
    front = rear = 0;

    while (front <= rear)
    {
        ll u = q[front++];
        ll v = u - 1;
        if (v >= 0 && dist[v] == -1)
        {
            dist[v] = dist[u] + 1;
            q[++rear] = v;
        }
        ll w = u * 2;
        if (w < MAX && dist[w] == -1)
        {
            dist[w] = dist[u] + 1;
            q[++rear] = w;
        }
        if (u == T)
        {
            return dist[T];
        }
    }
    return -1;
}

void solve()
{
    ll s, t;
    cin >> s >> t;
    cout << back(s, t) << endl;
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
