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

bool check(char c)
{
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}

string conv(string prefix)
{
    stack<string> s;
    int len = prefix.length();
    for (int i = len - 1; i >= 0; i--)
    {
        if (check(prefix[i]))
        {
            string op1 = s.top();
            s.pop();
            string op2 = s.top();
            s.pop();
            string temp = "(" + op1 + prefix[i] + op2 + ")";
            s.push(temp);
        }
        else
        {
            s.push(string(1, prefix[i]));
        }
    }
    return s.top();
}

void solve()
{
    string prefix;
    cin >> prefix;
    cout << conv(prefix) << endl;
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
