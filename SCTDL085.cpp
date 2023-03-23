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
vec bdn;
void gen()
{
    queue<string> q;
    q.push("1");
    int i = 0;
    while (i++ <= 10000)
    {

        string s1 = q.front();
        bdn.push_back(stoll(s1));
        q.pop();
        string s2 = s1;
        q.push(s1.append("0"));
        q.push(s2.append("1"));
    }
}

void solve()
{
    ll n;
    cin >> n;
    int i = 0;
    ll count = 0;
    while (i < bdn.size() && bdn[i] <= n)
    {
        count++;
        i++;
    }
    cout << count << endl;
}

int main()
{
    faster();
    gen();
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
