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
    int n, m, k;
    cin>>n>>m>>k;
    vector<int>a(n), b(n);
    for (int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for (int i=0; i<n; i++)
    {
        cin>>b[i];
    }

    vector<int>v;
    for (int i=0; i<n; i++)
    {
        v.push_back(a[i] - b[i]);
    }

    sort(v.begin(), v.end(), greater<int>());

    vector<int>c(m + k);
    for(int i=0; i<m+k; i++)
    {
        cin>>c[i];
    }
    sort(c.begin(), c.end(), greater<int>());

    //Yo bro, its like two pointer, huhaaa

    int i=0, j=0;
    while (i<n && j<(k + m))
    {
        if (v[i]<c[j])
        {
            j++;
        }
        else
        {
            v[i]-=c[j];
            i++;
            j++;
        }
    }

    int ans=accumulate(v.begin(), v.end(), 0ll);
    cout <<ans<< endl;

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

