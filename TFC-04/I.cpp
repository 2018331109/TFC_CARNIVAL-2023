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
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    int ab=min(a, b);
    int cd=min(c,d);
    if(ab>cd)
    {
        cout<<"Alice"<<endl;
    }
    else if(cd>ab)
    {
        cout<<"Bob"<<endl;
    }
    else
    {
        cout<<"Tie"<<endl;
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

