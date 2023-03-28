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
vector<string> res;

void cal(int n, string s, vector<string> &result)
{
    if (n == 0)
    {
        int zeros = 0, ones = 0;
        for (char c : s)
        {
            if (c == '0')
            {
                zeros++;
            }
            else if (c == '1')
            {
                ones++;
            }
        }
        if (zeros == ones)
        {
            result.push_back(s);
        }
        return;
    }
    cal(n - 1, s + "0", result);
    cal(n - 1, s + "1", result);
}

void solve()
{
    int n;
    cin >> n;

    cal(n, "", res);
    if (res.empty())
    {
        cout << "-1" << endl;
    }
    else
    {
        rev(res);
        for (auto s : res)
        {
            cout << s << " ";
        }
        cout << endl;
    }
    res.clear();
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
