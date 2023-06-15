#include <bits/stdc++.h>

#define faster()                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
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

string gcd(string a, string b)
{
    if (a.length() < b.length())
    {
        swap(a, b);
    }
    if (b.length() == 0)
    {
        return a;
    }

    string r = a.substr(b.length());
    return gcd(b, r);
}

void solve()
{
    string s1, s2, res = "", temp = "";
    cin >> s1 >> s2;
    cout << gcd(s1, s2);
}

int main()
{
    // faster();
    int test = 1;
    // cin >> test;
    // clean();
    while (test--)
    {
        solve();
    }
    // pause();
    return 0;
}
