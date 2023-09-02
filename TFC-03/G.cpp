 #include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define no cout<<"NO"<<endl;
#define yes cout<<"YES"<<endl;
#define neg cout<<-1<<endl;

int mod = 1e9+7;
int test;

void solve()
{
    map<char, int> m, f;
    int n;
    cin >> n;

    for (char c = 'a'; c <= 'j'; c++)
    {
        m[c] = f[c] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        int l = s.length();
        f[s[0]] = 1;

        for (int i = 0; i < l; i++)
        {
            m[s[i]] += pow(10, l - 1 - i);
        }
    }

    int ans = 0;
    int d = 1;
    int z = 1;
    vector<pair<char, int>> mm(m.begin(), m.end());
    sort(mm.begin(), mm.end(), [](const pair<char, int>& a, const pair<char, int>& b)
    {
        return a.second > b.second;
    });

    for (const auto& it : mm)
    {
        char c = it.first;
        int k = it.second;

        if (z && !f[c])
        {
            z = 0;
        }
        else
        {
            ans += d * k;
            d++;
        }
    }

    cout << ans << endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    //cin >> t;
    for(test=1; test<=t; test++)
    {
        solve();
    }
}

