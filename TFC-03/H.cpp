 #include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define no cout<<"NO"<<endl;
#define yes cout<<"YES"<<endl;
#define neg cout<<-1<<endl;
#define rine cout<<endl;
int mod = 1e9+7;

int test;

void solve()
{
    int n, a, b;
    cin >> n >> a >> b;
    string s;
    cin >> s;

    int pass1 = 0, pass2 = 0;
    for (char c : s)
    {
        if ((c == 'a' && pass1 < a + b) || (c == 'b' && pass1 < a + b && pass2 < b))
        {
            ++pass1;
            if (c == 'b') ++pass2;
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }
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

