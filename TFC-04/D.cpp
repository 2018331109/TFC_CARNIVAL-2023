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
    int n;
    cin>>n;
    int a[n];
    int cnt=0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
        {
            cnt++;
        }
    }
    if(cnt==0)
    {
        cout<<0<<endl;
    }
    else if(cnt==n)
    {
        cout<<-1<<endl;
    }
    else
    {
        cout<<cnt<<endl;
    }

}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    for(test=1; test<=t; test++)
    {
        solve();
    }
}

