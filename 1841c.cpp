#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 5;
const int V[] = {1, 10, 100, 1000, 10000};

int val[N];
int dp[N][2];

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        int n = s.size();
        for (int i = 0; i < n; i++)
        {
            val[i] = V[s[i] - 'A'];
        }

        dp[0][0] = val[0];
        dp[0][1] = -val[0];
        for (int i = 1; i < n; i++)
        {
            dp[i][0] = max(dp[i - 1][0] + val[i], dp[i - 1][1] - val[i]);
            dp[i][1] = max(dp[i - 1][1] - val[i], dp[i - 1][0] + val[i]);
        }

        int ans = max(dp[n - 1][0], dp[n - 1][1]);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                int x = V[j];
                if (x == val[i])
                    continue;
                int tmp = dp[i][0] - val[i] + x;
                if (i < n - 1 && val[i + 1] > x)
                    tmp -= 2 * val[i];
                ans = max(ans, tmp);
                tmp = dp[i][1] + val[i] - x;
                if (i < n - 1 && val[i + 1] > x)
                    tmp += 2 * val[i];
                ans = max(ans, tmp);
            }
        }

        cout << ans << endl;
    }
    return 0;
}