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
    string a, b;
    cin>>a>>b;
    int n=a.length();
    cout<<a<<endl;
    cout<<b<<endl;

    for(int i=0;i<n;i++)
    {
        if(a[i]==b[i])
        {
            cout<<'.';
        }
        else
        {
            cout<<'*';
        }
    }

    cout<<endl<<endl;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}

