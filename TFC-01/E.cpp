#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pmx push_mxack
#define no cout<<"No"<<endl;
#define yes cout<<"Yes"<<endl;
#define neg cout<<-1<<endl;
#define rine cout<<endl;
int mod = 1e9+7;

void solve()
{
    int cnt=0, i=0, li=0, ri=0, n=0, mx=0;
    cin >> n;
    int a[n];
    int ans[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < n;)
    {
        ri = li = i;
        while (li && a[li - 1] % a[i] == 0)
        {
            li--;
        }
        while (ri < n - 1 && a[ri + 1] % a[i] == 0)
        {
            ri++;
        }

        i = ri + 1;

        int len=ri-li;

        if (len > mx)
        {
            cnt = 0;
            mx = len;
        }

        if (len == mx)
        {
            ans[cnt++] = li + 1;
        }
    }

    cout<<cnt<<" "<<mx<<endl;

    for(int i=0; i<cnt; i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;

}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    //cin >> t;
    while(t--)
    {
        solve();
    }
}

