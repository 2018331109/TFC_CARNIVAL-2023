#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define no cout<<"NO"<<endl;
#define yes cout<<"YES"<<endl;
#define neg cout<<-1<<endl;

int mod = 1e9+7;
// Yes bro, it's a Fenwick Tree Implementation!!!
int test;
const int mx = 100009;

vector<int> a(mx), b(mx), id(mx), fenwick(mx);

int lowbit(int x)
{
    return x & (-x);
}

void update(int x, int val)
{
    for (; x < fenwick.size(); x += lowbit(x))
    {
        fenwick[x] += val;
    }
}

int query(int x)
{
    int sum = 0;
    for (; x > 0; x -= lowbit(x))
    {
        sum += fenwick[x];
    }
    return sum;
}
void solve()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        id[a[i]] = i;
    }

    for (int i = 1; i <= n; ++i)
    {
        cin >> b[i];
    }

    fill(fenwick.begin(), fenwick.end(), 0);
    int ans = 0;

    for (int i = 1; i <= n; ++i)
    {
        int index = id[b[i]];
        ans += i - 1 - query(index);
        update(index, 1);
    }

    cout << ans << endl;
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

