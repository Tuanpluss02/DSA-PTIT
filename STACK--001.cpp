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

void solve()
{
  string s;
  getline(cin, s);
  if (s == "" || s == " ")
  {
    cout << "YES" << endl;
    return;
  }
  stack<char> st;
  For(i, 0, s.size())
  {
    if (s[i] == '(' || s[i] == '[' || s[i] == '{')
      st.push(s[i]);
    else if (s[i] == ')' || s[i] == ']' || s[i] == '}')
    {

      if (st.empty())
      {
        cout << "NO";
        return;
      }
      char tmp = st.top();
      st.pop();
      if (s[i] == ')' && tmp != '(')
      {
        cout << "NO";
        return;
      }
      if (s[i] == ']' && tmp != '[')
      {
        cout << "NO";
        return;
      }
      if (s[i] == '}' && tmp != '{')
      {
        cout << "NO";
        return;
      }
    }
  }
  if (st.empty())
    cout << "YES";
  else
    cout << "NO";
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
    if (test)
      cout << endl;
  }
  // pause();
  return 0;
}