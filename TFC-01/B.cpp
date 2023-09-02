#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define no cout<<"No"<<endl;
#define yes cout<<"Yes"<<endl;
#define neg cout<<-1<<endl;
#define line cout<<endl;
int mod = 1e9+7;

void solve( )
{
    int n;
    cin>>n;
    int a[n];
    int mx=0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(i)
        {
            mx=max(mx, a[i]-a[i-1]);
        }
    }

    int mn=1000000;

    for(int i=0; i+2<n; i++)
    {
        int d=a[i+2]-a[i];
        mn=min(mn, d);
    }

    int ans=max(mx, mn);

    cout<<ans<<endl;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    //cin >> t;
    while (t--)
    {
        solve();
    }
}

