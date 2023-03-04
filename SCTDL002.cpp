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
string nextBin(string &num)
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
    return num;
}

vector<string> binGen(vector<string> &v, int x)
{
    string s(x, '0');
    v.pb(s);
    For(i, 0, pow(2, x))
    {
        v.pb(nextBin(s));
    }
    return v;
}

void solve()
{
    string s;
    cin >> s;
    int x = count(s.begin(), s.end(), '?');
    vector<string> v;
    v = binGen(v, x);
    for (int i = 0; i < v.size() - 1; i++)
    {
        int idx = 0;
        for (char j : s)
        {
            if (j == '?')
            {
                cout << v[i][idx++];
            }
            else
                cout << j;
        }
        cout << endl;
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
