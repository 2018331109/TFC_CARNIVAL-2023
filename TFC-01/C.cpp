#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define no cout<<"No"<<endl;
#define yes cout<<"Yes"<<endl;
#define neg cout<<-1<<endl;
#define line cout<<endl;
int mod = 1e9+7;

int test;

const int mx = 200009;

int ch[3][mx];

void solve( )
{

    int arr[3];
    for (int i = 0; i < 3; ++i)
        cin >> arr[i];

    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < arr[i]; ++j)
            cin >> ch[i][j];
        sort(ch[i], ch[i] + arr[i]);
        arr[i] = unique(ch[i], ch[i] + arr[i]) - ch[i];
    }

    int ind[3] = {}, cnt[3][2] = {};
    while (true)
    {
        int mn = INT_MAX;
        for (int i = 0; i < 3; ++i)
        {
            if (ind[i] < arr[i])
                mn = min(mn, ch[i][ind[i]]);
        }

        if (mn == INT_MAX)
            break;

        int f = 0;
        for (int i = 0; i < 3; ++i)
        {
            if (ind[i] < arr[i] && ch[i][ind[i]] == mn)
                f |= 1 << i;
        }

        for (int i = 0; i < 3; ++i)
        {
            if (f == (1 << i))
                cnt[i][0]++;
            if (f == (((1 << 3) - 1) ^ (1 << i)))
                cnt[i][1]++;
        }

        for (int i = 0; i < 3; ++i)
        {
            if (ind[i] < arr[i] && ch[i][ind[i]] == mn)
                ind[i]++;
        }
    }

    cout << "Case #" << test << ":" << endl;
    for (int i = 0; i < 3; ++i)
        cout << cnt[i][0] << " " << cnt[i][1] << endl;
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

