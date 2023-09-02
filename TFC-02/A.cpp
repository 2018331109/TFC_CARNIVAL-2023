#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define no cout<<"No"<<endl;
#define yes cout<<"Yes"<<endl;
#define neg cout<<-1<<endl;
#define rine cout<<endl;
int mod = 1e9+7;

int test;

void solve()
{
    int w, m;
    cin >> w >> m;

    while (m > 0)
    {
        if (m % w == 1)
        {
            m -= 1;
        }
        else if (m % w == w - 1)
        {
            m += 1;
        }
        else if (m % w != 0)
        {
            cout << "NO" << endl;
            return;
        }

        m /= w;
    }

    cout << "YES" << endl;


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

