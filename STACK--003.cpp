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

bool check(char i)
{
    if (i != '*' || i != '/' || i != '-')
        return true;
    return false;
}

void solve()
{
    string s = "", tmp;
    getline(cin, tmp);
    For(i, 0, tmp.size())
    {
        if (tmp[i] == ' ')
            continue;
        s += tmp[i];
    }
    stack<char> st;
    for (auto &ch : s)
    {
        if (ch == ')')
        {
            char top = st.top();
            st.pop();
            bool ok = true;

            while (!st.empty() and top != '(')
            {

                if (top == '-' || top == '*' || top == '/')
                    ok = false;

                top = st.top();
                st.pop();
            }
            if (ok == true)
            {
                cout << "Yes";
                return;
            }
        }

        else
            st.push(ch);
    }
    cout << "No";
}

int main()
{
    faster();
    int test = 1;
    cin >> test;
    clean();
    while (test--)
    {
        solve();
        cout << endl;
    }
    // pause();
    return 0;
}