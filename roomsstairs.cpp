#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = n;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        count++;
        if (s[i] == '1')
        {
            ans = max(ans, (i + 1) * 2);
            count++;
        }
    }
     ans = max(ans,count);
    reverse(s.begin(),s.end());
    count  =0;
    for (int i = 0; i < n; i++)
    {
        count++;
        if (s[i] == '1')
        {
            ans = max(ans, (i + 1) * 2);
            count++;
        }
    }
    ans = max(ans,count);
    cout << ans << "\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}